#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	float a, b, x, c, F;
	cout << "¬ведiть a, b, x, c: ";
	cin >> a >> b >> x >> c;
	 
	if (c < 0 && b != 0) F = a * pow(x, 2) + pow(b, 2) * x;
	else if (c > 0 && b == 0) F = (x + a) / (x + c);
	else F = x / c;

	cout << "–езультат: " << F;

}