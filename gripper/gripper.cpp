#include <Servo.h>

Servo gripper;

void openGripper()
{
    gripper.write(20);
}

void closeGripper()
{
    gripper.write(90);
}