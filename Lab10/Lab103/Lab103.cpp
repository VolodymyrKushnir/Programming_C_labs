#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    ifstream fin("f.txt");

    if (fin.is_open())
    {
        int k = 0;
        char ch1 = fin.get();
        char ch2 = fin.get();

        if (ch1 >= '1' && ch1 <= '9') {
            k++; cout << "������ ������ �� �����\n";
        }
        else cout << "������ ������ �� �� �����\n";


        if (ch2 >= '1' && ch2 <= '9') {
            k++; cout << "������ ������ �� �����\n";
        }
        else cout << "������ ������ �� �� �����\n";

        if (k == 2 && ch2 % 2 == 0) { cout << "����� " << ch1 << ch2 << " � ������\n"; }
        else if (k == 2) cout << "����� " << ch1 << ch2 << " � ��������\n";
    }
    else cout << "���� �� ��������.\n";

    return 0;
}