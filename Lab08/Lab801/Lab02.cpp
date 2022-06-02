#include "Lab02.h"
#include <iostream>
#include <math.h>

using namespace std;

double Lab02(double x, double y)
{
    setlocale(LC_CTYPE, "ukr");

    double result;
    result = sqrt((x + y) / (pow(x, 2) - pow(y, 2) + 5));
    return result;
}