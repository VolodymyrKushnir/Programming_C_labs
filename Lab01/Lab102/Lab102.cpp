#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double P;
    cout << "����i�� P �: ";
    cin >> P;
    double vershok = 44.45 * P / 1000, arshin = 16 * vershok,
        shashen = 3 * arshin, versta = 500 * shashen;
    cout << "������: " << vershok << " �";
    cout << "\n�����: " << arshin << " �";
    cout << "\n������: " << shashen << " �";
    cout << "\n������: " << versta << " �";

}