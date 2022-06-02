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
        cout << "1-7 �����i, 0 - ���i� � �������� \n";
        cout << "������ � = ";
        cin >> n;

        switch (n)
        {

        case 0:
            cout << "���������� ��������.";
            break;
        case 1:
            cout << "\n" << "Lab01:" << "\n";
            double P;
            cout << "����i�� P �: ";
            cin >> P;
            Lab01(P);
            cout << "\n\n";
            break;
        case 2:
            cout << "\n" << "Lab02:" << "\n";
            double x, y;
            cout << "����i�� x �� y: ";
            cin >> x >> y;
            cout << Lab02(x, y);
            cout << "\n\n";
            break;
        case 3:
            cout << "\n" << "Lab03:" << "\n";
            float a, b;
            cout << "����i�� a i b: ";
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
            cout << "����i�� X (�i����) i N (�i��): ";
            cin >> X >> N;
            while (X == 0) {
                cout << "X �� ���� ���������� 0!" << "\n" << "����i�� X:";
                cin >> X;
                cin.ignore();
            }
            cout << Lab07(X, N);
            cout << "\n\n";
            break;
        default:
            cout << "�������\n"; break;
        }
    } while (n != 0);
}