#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n;
    cout << "������ n: ";
    cin >> n;
    switch (n) {
    case 1:
        cout << "ѳ����";
        break;
    case 2:
        cout << "�����";
        break;
    case 3:
        cout << "��������";
        break;
    case 4:
        cout << "������";
        break;
    case 5:
        cout << "�������";
        break;
    case 6:
        cout << "�������";
        break;
    case 7:
        cout << "������";
        break;
    case 8:
        cout << "�������";
        break;
    case 9:
        cout << "��������";
        break;
    case 10:
        cout << "�������";
        break;
    case 11:
        cout << "��������";
        break;
    case 12:
        cout << "�������";
        break;
    default:
        cout << "������ ��������";
    }
}