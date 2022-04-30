// Lab202.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    float x, y;
    cout << "¬вед≥ть x та y: ";
    cin >> x >> y;
    float result;
    result = sqrt((x + y) / (pow(x,2)-pow(y,2)+5));
    cout << result;
}