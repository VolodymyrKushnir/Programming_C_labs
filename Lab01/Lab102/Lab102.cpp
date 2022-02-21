#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double P;
    cout << "Введiть P м: ";
    cin >> P;
    double vershok = 44.45 * P / 1000, arshin = 16 * vershok,
        shashen = 3 * arshin, versta = 500 * shashen;
    cout << "Вершок: " << vershok << " м";
    cout << "\nАришн: " << arshin << " м";
    cout << "\nСажень: " << shashen << " м";
    cout << "\nВерста: " << versta << " м";

}