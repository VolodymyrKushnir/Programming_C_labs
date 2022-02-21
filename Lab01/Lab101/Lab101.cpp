#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, c;
    double summ, sump;
    cout << "Введiть a, b, c: " << endl;
    cin >> a >> b >> c;
    summ = (abs(a) + abs(b) + abs(c)) / 3;
    sump = (pow(a, 3) + pow(b, 3) + pow(c, 3)) / 3;
    cout << "Середнє арифметичне модулiв чисел: " << summ;
    cout << "\nСереднє арифметичне кубiв чисел: " << sump;

}