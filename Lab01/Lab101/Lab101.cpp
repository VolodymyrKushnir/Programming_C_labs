#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, c;
    double summ, sump;
    cout << "����i�� a, b, c: " << endl;
    cin >> a >> b >> c;
    summ = (abs(a) + abs(b) + abs(c)) / 3;
    sump = (pow(a, 3) + pow(b, 3) + pow(c, 3)) / 3;
    cout << "������ ����������� �����i� �����: " << summ;
    cout << "\n������ ����������� ���i� �����: " << sump;

}