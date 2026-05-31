#include "ik.h"

JointAngles inverseKinematics(
float x,
float y,
float z,
float roll,
float pitch,
float yaw)
{
    JointAngles a;

    a.j1 = 90;
    a.j2 = 90;
    a.j3 = 90;
    a.j4 = 90;
    a.j5 = 90;
    a.j6 = 90;

    return a;
}