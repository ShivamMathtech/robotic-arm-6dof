#ifndef JOINTS_H
#define JOINTS_H

#include <Servo.h>

class JointController
{
public:

    Servo j1;
    Servo j2;
    Servo j3;
    Servo j4;
    Servo j5;
    Servo j6;

    void begin();

    void moveJoint(uint8_t id, int angle);

    void moveAll(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6
    );

};

#endif