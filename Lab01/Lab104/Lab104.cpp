#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    float P1, P2, P3;
    do {
        cout << "�i������� �i��� ������� ��������: ";
        cin >> P1;
        if (P1 <= 0) cout << "����� �� ���� ���� ����� ��� ���i������� 0" << endl;

    } while (P1 <= 0);
    cout << "������ ������� ��������: " << P1 << " ���." << endl;
    cout << endl;

    do {
        cout << "�i������� �i��� ������� ��������: ";
        cin >> P2;
        if (P2 <= P1) cout << "������ ������� ������ �i��i�� �������! ���� ������� ���� �i����� �� " << P1 << " ���." << endl;


    } while (P2 <= P1);
    cout << "������ ������� ��������: " << P2 << " ���." << endl;
    cout << endl;

    do {
        cout << "�i������� �i��� �������� ��������: ";
        cin >> P3;
        if (P3 <= P2) cout << "����� ������� ������ �i��i�� ������� i �������! ���� ������� ���� �i����� �� " << P2 << " ���." << endl;

    } while (P3 <= P2);
    cout << "����i� ������� ��������: " << P3 << " ���." << endl;
}