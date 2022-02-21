#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double x1, x2, x3, y1, y2, y3;
    double square;
    cout << "Задайте координати вершин: " << endl;
    cout << "x1, y1: ";
    cin >> x1 >> y1;
    cout << "x2, y2: ";
    cin >> x2 >> y2;
    cout << "x3, y3: ";
    cin >> x3 >> y3;
    square = abs((double)(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2);

    cout << "Площа трикутника: " << square;

}