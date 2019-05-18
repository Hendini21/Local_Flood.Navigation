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
    
const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n"
    "MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n"
    "ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n"
    "b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n"
    "MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n"
    "b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n"
    "ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n"
    "9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n"
    "IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n"
    "VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n"
    "93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n"
    "jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n"
    "AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n"
    "A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n"
    "U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n"
    "N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n"
    "o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n"
    "5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n"
    "rqXRfboQnoZsG4q5WTP468SQvvG5\n"
    "-----END CERTIFICATE-----"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n"
    "MIIDWjCCAkKgAwIBAgIVALJ9W3XrCXtSERrIw0jxdaLa+uqHMA0GCSqGSIb3DQEB\n"
    "CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"
    "IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTA1MTgyMDE1\n"
    "MzJaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"
    "dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDijbHGquVDu7nc0kYt\n"
    "aBz8Z9HOhq/QplvTZIgMw0eOSPrzaflmS/mK0hXsxF+F5Bkijk/iRvJsaJJV61Fg\n"
    "mVN+hfO472oLvj0PgYkWVGmCq0/GjkcZQ5FmStErKuGaVFuB4iDXa1zXeCq16eVi\n"
    "cyy9OtQ2i+BD3oV1eZm7NJDWEyl+nFCqFIUqMPiz6j4uAlZupnnA1EyANSvyeCG8\n"
    "LVw8BQvKI7+3G9ThOW/RCJkR6wLXDNAdZ4+gVO0mbazCASFspc8aP9G2ynSIRSnU\n"
    "zPKnhIm0IC/Bp/FT2pbN2ZVt10OVNG1GXM/WF1TU60nCxt7z37z++1iDp6eoT0Ja\n"
    "A9HpAgMBAAGjYDBeMB8GA1UdIwQYMBaAFHGRj3s+iPhfAoHZ0drK3ezFfov3MB0G\n"
    "A1UdDgQWBBSNZ29JEvzYUuGacu9TVkFrC7s6rzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"
    "DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAgOD24FavedbnO3d3CNV7jeww\n"
    "oL3jkAc+9kD8U1I+MYuULE5FSAYCiLfmDJySQWgtWVJyRIAbwTUMUJYHIMXbzNKY\n"
    "W7nc3p/z9NN9+IWOSDKT4ykNBk1+gCViPq4qEQj/Nhf/ZIrYzgKBheDRlPFO+/XF\n"
    "sm7PR6aP1E47tfYj3kk3DWqYHyexCyH+I+aEtC0bCHyUcuNeTrOb1i3iqpVXFKub\n"
    "ndeAnm8YF5UsU4DxYC9X4O8Jr2VCVD6l44l0hu8H2VBTCv0WWHZuVIBksKEzJZGb\n"
    "tWbS05mM49Ol1H+FYTmTlsRemjk6r4PwfVGGE4kn9cX8wtmhmxPPfnusl7fVSA==\n"
    "-----END CERTIFICATE-----"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n"
    "MIIEowIBAAKCAQEA4o2xxqrlQ7u53NJGLWgc/GfRzoav0KZb02SIDMNHjkj682n5\n"
    "Zkv5itIV7MRfheQZIo5P4kbybGiSVetRYJlTfoXzuO9qC749D4GJFlRpgqtPxo5H\n"
    "GUORZkrRKyrhmlRbgeIg12tc13gqtenlYnMsvTrUNovgQ96FdXmZuzSQ1hMpfpxQ\n"
    "qhSFKjD4s+o+LgJWbqZ5wNRMgDUr8nghvC1cPAULyiO/txvU4Tlv0QiZEesC1wzQ\n"
    "HWePoFTtJm2swgEhbKXPGj/Rtsp0iEUp1Mzyp4SJtCAvwafxU9qWzdmVbddDlTRt\n"
    "RlzP1hdU1OtJwsbe89+8/vtYg6enqE9CWgPR6QIDAQABAoIBAC/DgdyJwSZDmM7m\n"
    "gicmkR3h4YjyOnT57dgmlMxkC10DI+1XxV383JKY8khlqmH3EhmH+W2SWZ/jeB6n\n"
    "KxP7n2/IW/b8etYY+JShUb6kc046Qepxqqm35hqz4V+Bfejkqho7C4N/PiarTg3m\n"
    "TxcvgxouIfmSCeklK+v1hCTE01heck9Iu1iR73b5cB8fSJ5DjdyKyNZiMR3MEmcz\n"
    "jLm6wETrl6EeFy5i0xKbJiitv9DHXVo3Gew3e9fpplz94iX4AfAn7rr1HYNgeIAy\n"
    "GlUau03XLOTN2uibFKjnkLgW6ZqKVdoVzwnXOtdLVKd+z2CHa4ytlYW7o33lA4Aw\n"
    "mNPuW9ECgYEA8pTJ+a/OJt5dyoi9+0t2G5YDhkIVmyzHCnof/5JCU3I5W6XTeGX/\n"
    "P8Am8zshq6VOfaMJbo09CmmfZZafNOOgMfJ8EAo06XHXZxeV59pVFB6c0s/DUPob\n"
    "Fn5mdbfZiBSOnNNoqWjfuDp6taY3zXxjCmHH6tTml6F/s9LMmkIPlgUCgYEA7xXv\n"
    "kKr9IH0hJNt1VxH522z++OIzviD+Z17sw//xjmFpeuEntykz05joFKWwhTasYLYD\n"
    "3DsBHAFD94hREZ2tJHbGXWK3iqOEINOYCFDTWjwnWBqLApEdjYRj0CmXTROLwI7/\n"
    "rZBoWMw+jn30clZ1GM6fCKrnDzpgZlBsM1IqTZUCgYBsBdXrWl5y8JLTnhD71p7B\n"
    "qgvnvYXhlA8Om1Oke30Nq8/e//krpEAGI4s0xSA5T2OkjvWkRUDpYh+ZHXnIE5VC\n"
    "qLiWa/Uj/43sWpRmqtM4ImmzdtGDPdzSJ3d49GXqMz1OmNYCmrEFWQVL3rj6yGlS\n"
    "NjjQWf5Vh5VWfoieKMzIAQKBgQC0TcatQ0ZCChvEv/xt/ZCAemKPL4f2CsvRCTVl\n"
    "Ws/AoJX7pXFeICSFnvrnF01YKTM2fA3NOHJNvGaVdqgssMyygyB1rMzeMRKj7u7o\n"
    "1ouNsW+6ccoD1YyD/SOJCNShu+vY+/611gHbdax3qWWAFNOaMbidwMUgJtYsUtpG\n"
    "meBtQQKBgFVG4dbIlTOLHmol836Xw0DOXGIyUPe/p7mvxz2Jb4FSXdnQxrVhvQiE\n"
    "mzpdqVLDBABcXgQ7womldCu3D6/N0/PI5z1aMgs60xmkgiTsAbWHqIZcmiq3yJPw\n"
    "QNqipsSEx2ViL1qtIZDz6kqmXekyLuCAzSBb9Csw4RD/E4nkYnzj\n"
    "-----END RSA PRIVATE KEY-----"};


#ifdef __cplusplus
}
#endif

