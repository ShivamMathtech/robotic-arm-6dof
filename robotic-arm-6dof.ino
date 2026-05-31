#include "config/config.h"

#include "joints/joints.h"

#include "communication/serial_cmd.h"
#include "communication/bluetooth.h"

JointController arm;

void setup()
{
    Serial.begin(BAUDRATE);

    bluetoothBegin();

    arm.begin();

    arm.moveAll(
        J1_HOME,
        J2_HOME,
        J3_HOME,
        J4_HOME,
        J5_HOME,
        J6_HOME
    );
}

void loop()
{
    processSerial();

    bluetoothTask();
}