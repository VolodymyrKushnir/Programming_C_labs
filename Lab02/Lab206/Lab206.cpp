#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double result= 1;
    for (int i = 1; i <= 101; i++) {
        result = result * i;
    }
    cout << result;
}