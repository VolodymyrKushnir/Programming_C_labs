#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	setlocale(LC_CTYPE, "ukr");
	double h, r, V;
	double* pf1 = &h, * pf2 = &r, * pf3 = &V;
	const double PI = 3.141592653589793;
	cout << "����i�� ������:";
	cin >> *pf1;
	if (*pf1 >= 1) {
		cout << "����i�� ���i��:";
		cin >> *pf2;
		if (*pf2 >= 1)
		{
			*pf3 = PI * pow(*pf2, 2) * *pf1 / 3;
			cout << "��� ������ ���i����:" << *pf3 << endl;
		}
		else cout << "���i�� �� ���� ���� �i�'����� ��� ���i������� 0" << endl;
	}
	else cout << "������ �� ���� ���� �i�'����� ��� ���i������� 0" << endl;
}