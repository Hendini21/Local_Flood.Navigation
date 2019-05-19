#include <AWS_IOT.h>
#include <WiFi.h>
#include <Adafruit_NeoPixel.h>

AWS_IOT hornbill;

#define SENSOR_PIN          34  // analog input
#define LED_PIN             13  // neopixel output
int THRESHOLD_WATER_OFF = 0;
int THRESHOLD_WATER_LOW = 1000;
int THRESHOLD_WATER_MED = 2000;
int THRESHOLD_WATER_HI  = 3000;

char WIFI_SSID[]="Cannon";
char WIFI_PASSWORD[]="TheCannon1";
char HOST_ADDRESS[]="a3ewrma4qcnzhx-ats.iot.us-east-2.amazonaws.com";
char CLIENT_ID[]= "flood_test";         // client id
char TOPIC_NAME[]= "flood_sensor_0001"; // topic name

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(1, LED_PIN, NEO_GRB + NEO_KHZ800);

int sensorValue = 0;
int status = WL_IDLE_STATUS;
int tick=0,msgCount=0,msgReceived = 0;
char payload[512];
char rcvdPayload[512];

void mySubCallBackHandler (char *topicName, int payloadLen, char *payLoad)
{
    strncpy(rcvdPayload,payLoad,payloadLen);
    rcvdPayload[payloadLen] = 0;
    msgReceived = 1;
}

void setup() {
    Serial.begin(115200);
    delay(2000);

    while (status != WL_CONNECTED)
    {
        Serial.print("Attempting to connect to SSID: ");
        Serial.println(WIFI_SSID);
        // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
        status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

        // wait 5 seconds for connection:
        delay(5000);
    }

    Serial.println("Connected to Wi-Fi!");

    if(hornbill.connect(HOST_ADDRESS,CLIENT_ID)== 0)
    {
        Serial.println("Connected to AWS!");
        delay(1000);

        if(0==hornbill.subscribe(TOPIC_NAME,mySubCallBackHandler))
        {
            Serial.println("Subscribed to topic: ");
            Serial.println(TOPIC_NAME);
        }
        else
        {
            Serial.println("Subscribe Failed, Check the Thing Name and Certificates");
            while(1);
        }
    }
    else
    {
        Serial.println("AWS connection failed, Check the HOST Address");
        while(1);
    }

    delay(2000);

    // Initialize water sensor

    // Initialize LED
    pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() {
    pixels.clear();
    
    // Read water sensor
    sensorValue = analogRead(SENSOR_PIN);

    // Output sensor reading
    Serial.print("Sensor value: ");
    Serial.println(sensorValue);
    if(sensorValue < THRESHOLD_WATER_LOW){
        // Set all pixel colors to 'off'
        pixels.setPixelColor(0, pixels.Color(0, 0, 0));
        pixels.show();
//        pixels.clear();
    }
    else if(sensorValue < THRESHOLD_WATER_MED) {
        // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
        pixels.setPixelColor(0, pixels.Color(50, 0, 0));
        pixels.show();   // Send the updated pixel colors to the hardware
    }
    else {
        // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
        pixels.setPixelColor(0, pixels.Color(50, 50, 50));
        pixels.show();   // Send the updated pixel colors to the hardware
    }


    // Publish to AWS IoT
    if(msgReceived == 1)
    {
        msgReceived = 0;
        Serial.print("Received Message: ");
        Serial.println(rcvdPayload);
    }
    if(tick >= 5)   // publish to topic every 5seconds
    {
        tick=0;
//        sprintf(payload,"Flood sensor reading: %d",msgCount++);
        sprintf(payload,"Flood sensor reading: %d", sensorValue);
        if(hornbill.publish(TOPIC_NAME,payload) == 0)
        {        
            Serial.print("Publish Message: ");
            Serial.println(payload);
        }
        else
        {
            Serial.println("Publish failed");
        }
    }
    vTaskDelay(1000 / portTICK_RATE_MS); 
    tick++;
}
