#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cstdlib>

using namespace std;

void Lab01(double P)
{
    setlocale(LC_CTYPE, "ukr");
    double vershok = 44.45 * P / 1000, arshin = 16 * vershok,
        shashen = 3 * arshin, versta = 500 * shashen;
    cout << "Вершок: " << vershok << " м";
    cout << "\nАришн: " << arshin << " м";
    cout << "\nСажень: " << shashen << " м";
    cout << "\nВерста: " << versta << " м";

}

double Lab02(double x,double y)
{
    setlocale(LC_CTYPE, "ukr");

    double result;
    result = sqrt((x + y) / (pow(x, 2) - pow(y, 2) + 5));
    return result;
}

void swap(float* pf1, float* pf2) {
    float temp = *pf1;
    *pf1 = *pf2;
    *pf2 = temp;
}

void Lab03 (float a, float b){

    float* pf1 = &a,* pf2 = &b;
    *pf1 *= 3;

    swap(*pf1, *pf2);

    cout << "a:" << *pf1 << endl;
    cout << "b:" << *pf2;
}

void Lab04()
{
    setlocale(LC_CTYPE, "ukr");
    int array1[100];

    cout << "Array 1:";
    for (int i = 0; i < 100; i++) {
        array1[i] = 1 + rand() % 50;

        cout << "\n[" << i << "]" << ": " << array1[i];
    }
    cout << '\n';

    int count = 0;
    cout << "Зворотнiй порядок по 6 елементiв: \n";
    for (int i = 99; i >= 0; i--) {

        if (count == 6) {
            cout << endl;
            count = 0;
        }
        count++;
        cout << array1[i] << " ";
    }
}

void Lab05(string s)
{
    setlocale(LC_CTYPE, "ukr");
    for (int i = s.size() - 1; i > 0; i--)
        if (s[i] == '.' && s[i - 1] == '.') s.erase(i, 1);

    cout << s << "\n";
}

const int route = 8;
bool p = true;
int cont;

struct MARSH {
    string startp;
    string endp;
    int number;
};

int Lab06()
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

float Lab07(float X, int N) {
    if (N == 0)
        return 1;
    if (N < 0)
        return Lab07(1 / X, -N);
    else return X * Lab07(X, N - 1);
}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n = 0;
    do
    {
        cout << "1-7 задачi, 0 - вихiд з програми \n";
        cout << "Задача № = ";
        cin >> n;

        switch (n)
        {

        case 0:
            cout << "Завершення програми.";
            break;
        case 1:
            cout << "\n" << "Lab01:" << "\n";
            double P;
            cout << "Введiть P м: ";
            cin >> P;
            Lab01(P);
            cout << "\n\n";
            break;
        case 2:
            cout << "\n" << "Lab02:" << "\n";
            double x, y;
            cout << "Введiть x та y: ";
            cin >> x >> y;
            cout << Lab02(x, y);
            cout << "\n\n" ;
            break;
        case 3:
            cout << "\n" << "Lab03:" << "\n";
            float a, b;
            cout << "Введiть a i b: ";
            cin >> a >> b;
            Lab03(a, b);
            cout << "\n\n";
            break;
        case 4:
            cout << "\n" << "Lab04:" << "\n";
            Lab04();
            cout << "\n\n";
            break;
        case 5: {
            cout << "\n" << "Lab05:" << "\n";
            string s;
            cout << "Введiть текс на англiйськiй який мiстить послiдовнiсть крапок:" << "\n";
            getline(cin, s);
            Lab05(s);
            cout << "\n\n";
        } break;
        case 6:
            cout << "\n" << "Lab06:" << "\n";
            Lab06();
            cout << "\n\n";
            break;
        case 7:
            cout << "\n" << "Lab07:" << "\n";
            double X;
            int N;
            cout << "Введiть X (дiйсне) i N (цiле): ";
            cin >> X >> N;
            while (X == 0) {
                cout << "X не може дорівнювати 0!" << "\n" << "Введiть X:";
                cin >> X;
                cin.ignore();
            }
            cout << Lab07(X, N);
            cout << "\n\n";
            break;
        default:
            cout << "Помилка\n"; break;
        }
    } while (n != 0);
}
