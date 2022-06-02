#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <cstdlib>
#include "Lab01.h"
#include "Lab02.h"
#include "Lab03.h"
#include "Lab04.h"
#include "Lab05.h"
#include "Lab06.h"
#include "Lab07.h"

using namespace std;

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
            cout << "\n\n";
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
            Lab05();
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