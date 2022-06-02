#include "Lab01.h"
#include <iostream>
#include <math.h>

using namespace std;

void Lab01(double P)
{
    setlocale(LC_CTYPE, "ukr");
    double vershok = 44.45 * P / 1000, arshin = 16 * vershok,
        shashen = 3 * arshin, versta = 500 * shashen;
    cout << "Вершок: " << vershok << " м";
    cout << "\nАришн: " << arshin << " м";
    cout << "\nСажень: " << shashen << " м";
    cout << "\nВерста: " << versta << " м";

}