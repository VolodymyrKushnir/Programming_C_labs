
// ���� ���������� ����� � �� ����������� ������ ����� �1,�2,...,��. ��������� �� �����, ���� �� ������
// � ����� ����� ��������� �����.


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int size;
    cout << "����i�� ����i� ����i�������i: ";
    cin >> size;

    int* array = new int[size];
    cout << "����i�� ����i����i��� i� " << size << " �������i�: " << endl;
    for (int i = 0; i < size; i++)
        cin >> array[i];

}