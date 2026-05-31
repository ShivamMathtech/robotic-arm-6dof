#include "joints.h"
#include "../config/pins.h"

void JointController::begin()
{
    j1.attach(J1_PIN);
    j2.attach(J2_PIN);
    j3.attach(J3_PIN);
    j4.attach(J4_PIN);
    j5.attach(J5_PIN);
    j6.attach(J6_PIN);
}

void JointController::moveJoint(uint8_t id,int angle)
{
    switch(id)
    {
        case 1: j1.write(angle); break;
        case 2: j2.write(angle); break;
        case 3: j3.write(angle); break;
        case 4: j4.write(angle); break;
        case 5: j5.write(angle); break;
        case 6: j6.write(angle); break;
    }
}

void JointController::moveAll(
int a1,int a2,int a3,
int a4,int a5,int a6)
{
    j1.write(a1);
    j2.write(a2);
    j3.write(a3);
    j4.write(a4);
    j5.write(a5);
    j6.write(a6);
}