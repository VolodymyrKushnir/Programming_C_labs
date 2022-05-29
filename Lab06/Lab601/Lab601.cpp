#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

const int route = 8;
bool p = true;
int cont;

struct MARSH {
    string startp;
    string endp;
    int number;
};

int main()
{
    setlocale(LC_CTYPE, "ukr");
    MARSH marsh[route];

    for (int i = 0; i < route; i++) {
        cout << "Запис #" << i + 1 << "\n";
        cout << "Назва початкового маршуту:";
        getline(cin, marsh[i].startp);
        cout << "Назва кiнцевого маршуту:";
        getline(cin, marsh[i].endp);
        cout << "Номер маршрута:";
        cin >> marsh[i].number;
        cin.ignore();
    }

    while (p) {
        p = false;
        for (int i = 1; i < route; i++) {
            if (marsh[i].number < marsh[i - 1].number) {
                swap(marsh[i].startp, marsh[i - 1].startp);
                swap(marsh[i].endp, marsh[i - 1].endp);
                swap(marsh[i].number, marsh[i - 1].number);
                p = true;
            }
        }
    }

    for (int i = 0; i < route; i++) {
        cout << "Запис #" << i + 1 << ": " << endl;
        cout << "\tПочатковий пункт: " << marsh[i].startp;
        cout << "\n\tКiнцевий пункт: " << marsh[i].endp;
        cout << "\n\tМаршут номер: " << marsh[i].number;
        cout << endl;
    }

    cout << "\n" << "Пошук маршуту" << "\n";
    int point;
    bool found;
    do {
        cout << "Введiть номер маршуту:";
        cin >> point;

        found = false;
        for (int i = 0; i < route; i++) {
            if (marsh[i].number == point) {
                cout << "---" << endl;
                cout << "\tПочатковий пункт: " << marsh[i].startp;
                cout << "\n\tКiнцевий пункт: " << marsh[i].endp;
                cout << "\n\tМаршут номер: " << marsh[i].number;
                cout << endl;
                found = true;
                cout << "\n" << "Продовжити пошук? (1 - так 0 - нi):";
                cin >> cont;
                cin.ignore();
            }
        }
        if (!found) {
            cout << "Маршут за таким номером не знайдено." << "\n";

            cout << "\n" << "Продовжити пошук? (1 - так 0 - нi):";
            cin >> cont;
            cin.ignore();
        }
    } while (cont != 0);
    cout << "\n" << "Гарного дня :)";
    return(0);
}