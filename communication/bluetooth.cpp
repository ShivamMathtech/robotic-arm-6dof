#include "bluetooth.h"

void bluetoothBegin()
{
    Serial1.begin(9600);
}

void bluetoothTask()
{
    if(Serial1.available())
    {
        String cmd =
        Serial1.readStringUntil('\n');

        Serial.println(cmd);
    }
}