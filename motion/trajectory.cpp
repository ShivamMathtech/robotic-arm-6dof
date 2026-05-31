#include "trajectory.h"

void moveSmooth(
int startAngle,
int endAngle,
int delayTime)
{
    for(int i=startAngle;i<=endAngle;i++)
    {
        delay(delayTime);
    }
}