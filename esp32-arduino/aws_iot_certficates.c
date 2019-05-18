/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWTCCAkGgAwIBAgIUU2KcyceG9NIL6JxKJPFxRqXyIPAwDQYJKoZIhvcNAQEL\n\
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n\
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTE5MDUxODIyMjM1\n\
NFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n\
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMMGmARIkTnM83f+RMYK\n\
aZ3kSf7O+LxSV+laLrLqfxF8VcjKJU28/AfHPiCZkbASpzqolMdZSvyTWib5nAKz\n\
66fkK8ILycPGH05uuefzpHq48A9JdF8KiBhElRFS/X89pmPJoP3MThfSZb8uuowJ\n\
3ZhBOeenYv354fOgXAeH0smrPgNPnPjUj+SQDoQXcgdYtE7Uw4+8CEOHZ//BjNsv\n\
TH1ByUCt4h6RhdQJiMYSJG3zcX1zj3yCGJ9q1UaTX8rXWwocSuCtvXIILulx+maB\n\
jDLPhiujRm/+W3wB1wOLXee+ra/07np7dzA6vqkiYanJEq9gd+ECh/Okohv5gxKX\n\
m30CAwEAAaNgMF4wHwYDVR0jBBgwFoAUDDTqaxr7PZNAN29HuvAFtk4+YOkwHQYD\n\
VR0OBBYEFBKhO4a6XPBSflQD5lN5/2Jm4fVzMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n\
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQBOfhjoisEBzr/lBJJFZLknXCCY\n\
R4e1bDc9feuWVTOIfS2iN2BxRDAsJeTD8rmR/mYUUCeqFOBpA7PmDLe0tVT8X5YZ\n\
kXc+HYufpz1557Vju5Otk0oiyJq8Brs7pCdCRXTDoQVlHnwBvf4SbSnlYxH/Mf5W\n\
FJzdgw5L0ntSDlO9AbslMh6BsgozK+eq9GuD3B2nJK+YnA5LJNF/axrTIXtEBgpi\n\
oX8GDL4aV3CorC4r95FD1i0qMsMUEKWLd7j1rpI2F28fealMihMhZ06sXnnYTqDJ\n\
Fyh+USSI0onMozirizyTmHg+98/ANBX3Xn4aHgvf3CvVROz4e/4XObhDZq56\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpQIBAAKCAQEAwwaYBEiROczzd/5ExgppneRJ/s74vFJX6Vousup/EXxVyMol\n\
Tbz8B8c+IJmRsBKnOqiUx1lK/JNaJvmcArPrp+QrwgvJw8YfTm655/OkerjwD0l0\n\
XwqIGESVEVL9fz2mY8mg/cxOF9Jlvy66jAndmEE556di/fnh86BcB4fSyas+A0+c\n\
+NSP5JAOhBdyB1i0TtTDj7wIQ4dn/8GM2y9MfUHJQK3iHpGF1AmIxhIkbfNxfXOP\n\
fIIYn2rVRpNfytdbChxK4K29cggu6XH6ZoGMMs+GK6NGb/5bfAHXA4td576tr/Tu\n\
ent3MDq+qSJhqckSr2B34QKH86SiG/mDEpebfQIDAQABAoIBAAkwdlk9Uhp3HcG5\n\
qWPrea6G4zWuaun0t0+3gBvOEM6yHRio7bkL/pQfPz4p/kNdnaOV7ey2uGHOT6Em\n\
gcNe1uvCRI2QIKGo5DC95uSXBlkB/c26mFEiHeeG079NOcSVExIAniVXSxa0QzcO\n\
7JtMm7Rg3mmb6X4uGAdytuNj8vqtkd/naQtFg4TUahRucVKVFaiqjPUiUT4ItgDb\n\
ocV8/NXRG5goZX65iHtMFbPU8KPHJ0Zsoc4JgJoei7v+DpNzB6wXhe1nSX7+t1Re\n\
G7Prw8RwtEvZ/M3lyvx+BCafUgk9CYKMjc0Frrr1zzfY2jWLhJzwwFnx02BfDuAs\n\
+rZQBgECgYEA37wj+dMM+7I7+CJ1HEAeKpLW5sS5TXHGq20LfnFsheWPv+CuCujg\n\
XcfXsBxHAgD2bHkSKo6V13rvyZSnWXh3WxwABYCtoNB1yF8V4TpGCd0Xc48m4faM\n\
tNVyxB54ITV0Ks+hxQGpgHisGrZfhytGSs2b4WQn3qIjIhI1VW3QkwUCgYEA3yaR\n\
B7vJAW6vs34b457nndEydAgWGPdk4OtyMM6sCK5qSu2YkvjBzXNG/HvQEckxKQgJ\n\
KwI1UhX16vy3awFUd2GTe1mZZ7dwtzJdaz4u7xWuED5zt2Kt7haPBT77+FbYNfpZ\n\
w96qherpUed7DluMjNFn9m4VPwWyo+pGl3wYQBkCgYEAm5nSf237qpUTxgfY4NPq\n\
5vsGwKnyodzOKe0FwGOL8TdtmSnegTHi0PYqmI2iCM+4kkpFixltNtaGK/DZzozM\n\
na3Eig8rMhuovrj6k5Ceoz+DjtfxV9fLlfyY+7KhI590ck3DGSuFwhaqw00w9OXw\n\
1hdXIRMx81FaE9kMBKUCGS0CgYEAjULtxnaCvSxjf33Si9pZBxeaF8fSrUVXD+cc\n\
J3d9ghVfZkVYM5nTnYpfIpACXG//ddkHbLl+JZOPVI1cUxnJbbVQVmKW8Qg4C1CP\n\
wMbhkSopQVE3kZyfPDv9l7WSblgTkMAFuS+oxRO7VcTyqlkb9TzO0jpHqtihiJBS\n\
1ayR8WkCgYEAzaKfSBbhAv2HL6npLB4VlgKL6d/1WGfKqLncZcjDdo/Q8T6tp0sj\n\
J++/BdA5cdFvVEL+GsRtR2I2zcNkfFuOKh//8B+5wzX99yNXB5zpabQ+PzJa1GtO\n\
0KRGqLtArRkzMNtNAuRyBp1lcMTf9B6gkURrEGrp9fAlcZ51NgpCx6c=\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
