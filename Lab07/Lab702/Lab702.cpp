// ���� ���������� ����� n (4<n<10) �� ���� ����� a1,a2,�an.
// ����������: sin | a1 + � + an | ;


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
	cout << "����i�� n (4<n<10):";
	cin >> n;
	while (n < 4 || n> 10) {
		cout << "n �� ���� ���� ����� �� 4 ��� �i���� �� 10!" << "\n" << "����i�� n:";
		cin >> n;
		cin.ignore();
	}

	zalupa(n);

}
