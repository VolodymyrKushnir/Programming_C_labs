
// ���� ��������� ����� ������� ��������� �. ��������� ������� ������������ ��������.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    int size;
    cout << "����i�� ����i� ��������� ������i:";
    cin >> size;
    int** array1 = new int* [size];
    const int rows = size, cows = size;

    int array1[size][size];


    cout << "����i�� �������� ������i: " << rows << "x" << cows << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cows; j++) {
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "] = ";
            cin >> array1[i][j];
        }
    }

    cout << "\n�������: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cows; j++) {
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }

    int max = array1[0][0];
    int k = 1;
    for (int i = 0; i < cows; i++)
    {
        if (array1[i][i] > max)
        {
            max = array1[i][i];
            k = 1;
        }
        else if (array1[i] == max)
            ++k;
    }
    cout << "�i���i��� ������������ �������i�:";
    cout << k;
}