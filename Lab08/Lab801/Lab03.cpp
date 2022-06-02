#include "Lab03.h"
#include <iostream>

using namespace std;

void swap(float* pf1, float* pf2) {
    float temp = *pf1;
    *pf1 = *pf2;
    *pf2 = temp;
}

void Lab03(float a, float b) {

    float* pf1 = &a, * pf2 = &b;
    *pf1 *= 3;

    swap(*pf1, *pf2);

    cout << "a:" << *pf1 << endl;
    cout << "b:" << *pf2;
}