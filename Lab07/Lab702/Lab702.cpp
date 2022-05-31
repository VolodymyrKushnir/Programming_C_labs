// ƒано натуральне число n (4<n<10) та д≥йсн≥ числа a1,a2,Еan.
// ќбрахувати: sin | a1 + Е + an | ;


#include <iostream>
#include <cmath>
using namespace std;

void zalupa(int n) {
	long double res;
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		double temp;
		cout << "a" << i << "="; cin >> temp;
		sum += temp;
	}
	res = sin(abs(sum));
	cout << "result=" << res << endl;
}


int main()
{
	setlocale(LC_CTYPE, "ukr");
	int n;
	cout << "¬ведiть n (4<n<10):";
	cin >> n;
	while (n < 4 || n> 10) {
		cout << "n не може бути менше за 4 або бiльше за 10!" << "\n" << "¬ведiть n:";
		cin >> n;
		cin.ignore();
	}

	zalupa(n);

}
