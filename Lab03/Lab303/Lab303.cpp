#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");

	int* pa1 = new int;
	int* pa2 = new int;

	cout << "¬ведiть pa1: ";
	cin >> *pa1;

	cout << "¬ведiть pa2: ";
	cin >> *pa2;

	*pa1 /=2;

	cout << *pa1 << endl;
	cout << *pa2 << endl;


}