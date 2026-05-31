#ifndef FK_H
#define FK_H

struct Pose
{
    float x;
    float y;
    float z;

    float roll;
    float pitch;
    float yaw;
};

Pose forwardKinematics(
float t1,
float t2,
float t3,
float t4,
float t5,
float t6
);

#endif