
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

    double* array = new double[size];
    cout << "����i�� ����i����i��� i� " << size << " �������i�: " << endl;
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << "����i����i���:\n";

    for (int i = 0; i < size; i++)
        cout << array[i] << "   ";

    cout << "\n����� ��������� �����: \n";
    for (int i = 0; i < size; i++) {
        double temp = array[i];

        if (array[i] == -1.2456) continue;

        for (int j = i + 1; j < size; j++) {
            if (temp == array[j]) {
                cout << temp << "  ";

                for (int k = 0; k < size; k++) {
                    if (array[k] == temp) {
                        array[k] = -1.2456;
                    }
                }
            }
        }
    }
}