#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <Update.h>
#include <web_update.h>

String HOST = "https://host.com/firmware.bin";

web_update webUpdate(HOST, 1);
const char *ssid = "WIFI SSID";
const char *password = "WIFI PASSWORD";
void setup()
{
    Serial.begin(115200);
    WiFi.mode(WIFI_MODE_STA);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    webUpdate.update();
}

void loop()
{
}