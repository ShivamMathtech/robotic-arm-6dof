#include "fk.h"

Pose forwardKinematics(
float t1,
float t2,
float t3,
float t4,
float t5,
float t6)
{
    Pose p;

    p.x = 0;
    p.y = 0;
    p.z = 0;

    p.roll = t4;
    p.pitch = t5;
    p.yaw = t6;

    return p;
}