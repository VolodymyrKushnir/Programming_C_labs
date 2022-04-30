#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n;
    cout << "Введіть n: ";
    cin >> n;
    switch (n) {
    case 1:
        cout << "Січень";
        break;
    case 2:
        cout << "Лютий";
        break;
    case 3:
        cout << "Березень";
        break;
    case 4:
        cout << "Квітень";
        break;
    case 5:
        cout << "Травень";
        break;
    case 6:
        cout << "Червень";
        break;
    case 7:
        cout << "Липень";
        break;
    case 8:
        cout << "Серпень";
        break;
    case 9:
        cout << "Вересень";
        break;
    case 10:
        cout << "Жовтень";
        break;
    case 11:
        cout << "Листопад";
        break;
    case 12:
        cout << "Грудень";
        break;
    default:
        cout << "Невірне значення";
    }
}