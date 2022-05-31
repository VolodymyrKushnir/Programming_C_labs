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
    cout << "������: " << vershok << " �";
    cout << "\n�����: " << arshin << " �";
    cout << "\n������: " << shashen << " �";
    cout << "\n������: " << versta << " �";

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
    cout << "�������i� ������� �� 6 �������i�: \n";
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
        cout << "����� #" << i + 1 << "\n";
        cout << "����� ����������� �������:";
        getline(cin, marsh[i].startp);
        cout << "����� �i������� �������:";
        getline(cin, marsh[i].endp);
        cout << "����� ��������:";
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
        cout << "����� #" << i + 1 << ": " << endl;
        cout << "\t���������� �����: " << marsh[i].startp;
        cout << "\n\t�i������ �����: " << marsh[i].endp;
        cout << "\n\t������ �����: " << marsh[i].number;
        cout << endl;
    }

    cout << "\n" << "����� �������" << "\n";
    int point;
    bool found;
    do {
        cout << "����i�� ����� �������:";
        cin >> point;

        found = false;
        for (int i = 0; i < route; i++) {
            if (marsh[i].number == point) {
                cout << "---" << endl;
                cout << "\t���������� �����: " << marsh[i].startp;
                cout << "\n\t�i������ �����: " << marsh[i].endp;
                cout << "\n\t������ �����: " << marsh[i].number;
                cout << endl;
                found = true;
                cout << "\n" << "���������� �����? (1 - ��� 0 - �i):";
                cin >> cont;
                cin.ignore();
            }
        }
        if (!found) {
            cout << "������ �� ����� ������� �� ��������." << "\n";

            cout << "\n" << "���������� �����? (1 - ��� 0 - �i):";
            cin >> cont;
            cin.ignore();
        }
    } while (cont != 0);
    cout << "\n" << "������� ��� :)";
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
            cout << "\n\n" ;
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
            string s;
            cout << "����i�� ���� �� ����i����i� ���� �i����� ����i����i��� ������:" << "\n";
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
