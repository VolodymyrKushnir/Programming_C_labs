
// � ������ ����� �� ����������� ������ ������� �� ���� ������.

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    string s;
    cout << "����i�� ���� �� ����i����i� ���� �i����� ����i����i��� ������:" << "\n";
    getline(cin, s);

    for (int i = s.size() - 1; i > 0; i--)
        if (s[i] == '.' && s[i - 1] == '.') s.erase(i, 1);

    cout << s << "\n";
}