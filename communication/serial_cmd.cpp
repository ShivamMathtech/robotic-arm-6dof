#include "serial_cmd.h"

void processSerial()
{
    if(Serial.available())
    {
        String cmd = Serial.readStringUntil('\n');

        Serial.println(cmd);
    }
}