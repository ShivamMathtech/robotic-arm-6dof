#include "safety.h"

bool checkLimits(
int joint,
int angle)
{
    if(angle < 0) return false;

    if(angle > 180) return false;

    return true;
}