
// ��������� ���: "�������� �����", � ��� � ���� �����-������ ��������� ���� �����. ���������, �� �����
// ��Ͳ��� ����� �������� �����, ���, ��� � ��.��������� ����� ����� � ���� ����� �����������
// �� ����� ���� ����� ���, � ���� ���� ������� � ����� - �����.����� ���� ����������� ���, ���������
// ���������� � ������ ����� �������.³����, �� ����� ����� � ����� ����� � �������.������� �� ���
// �����������, �� ����������, �, �� ����� �������� �� �������� ����� - ������.

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    string s;
    cout << "����i�� ����� ����� i ����� �������i i� ������: ";
    getline(cin, s);
    cout << s << endl;

    string first_word = s.substr(0, s.find(' '));


    string temp = "";
    char del = ' ';

    for (int i = s.find(' ') + 1; i < (int)s.size(); i++) {

        if (s[i] != del) {
            temp += s[i];
        }
        else {

            for (int j = 0; j < temp.length(); j++) {
                if (first_word.find(temp[j]) == string::npos) {
                    cout << temp << "  - ����� �� �i�������\n";
                    break;
                }


            }

            temp = "";
        }

    }

    for (int j = 0; j < temp.length(); j++) {
        if (first_word.find(temp[j]) == string::npos) {
            cout << temp << " - ����� �� �i�������\n";
            break;
        }


    }

}