#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	setlocale(LC_CTYPE, "ukr");
	double h, r, V;
	double* pf1 = &h, * pf2 = &r, * pf3 = &V;
	const double PI = 3.141592653589793;
	cout << "Введiть висоту:";
	cin >> *pf1;
	if (*pf1 >= 1) {
		cout << "Введiть радiус:";
		cin >> *pf2;
		if (*pf2 >= 1)
		{
			*pf3 = PI * pow(*pf2, 2) * *pf1 / 3;
			cout << "Обєм конуса дорiвнює:" << *pf3 << endl;
		}
		else cout << "Радiус не може бути вiд'ємним або дорiвнювати 0" << endl;
	}
	else cout << "Висота не може бути вiд'ємною або дорiвнювати 0" << endl;
}