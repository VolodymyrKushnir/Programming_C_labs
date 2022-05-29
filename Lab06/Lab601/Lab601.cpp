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