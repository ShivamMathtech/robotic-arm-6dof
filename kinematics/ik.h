#ifndef IK_H
#define IK_H

struct JointAngles
{
    float j1;
    float j2;
    float j3;
    float j4;
    float j5;
    float j6;
};

JointAngles inverseKinematics(
float x,
float y,
float z,
float roll,
float pitch,
float yaw
);

#endif