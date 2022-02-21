#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double z1, z2;
    double a;
    const double PI = 3.141592653589793;
    cout << "Ââåäiòü a(a º R): ";
    cin >> a;

    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
    z2 = 2 * sqrt(2) * cos(a) * sin(PI / 4 + 2 * a);
    cout << "z1 = " << z1 << endl << "z2 = " << z2;
}