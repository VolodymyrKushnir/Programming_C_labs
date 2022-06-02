#include "Lab07.h"
#include <iostream>

using namespace std;

float Lab07(float X, int N) {
    if (N == 0)
        return 1;
    if (N < 0)
        return Lab07(1 / X, -N);
    else return X * Lab07(X, N - 1);
}