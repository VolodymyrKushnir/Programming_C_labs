#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    cout << "����i�� x �� y: ";
    float x, y;
    cin >> x >> y;
    if (y <= -x + 1 && y <= x + 1 && y >= x - 1 && y >= -x - 1)cout << "��������";
    else cout << "�� ��������";
}