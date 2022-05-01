#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    const int rows = 5, cows = 5;

    int array1[rows][cows];

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

    int max = *array1[0], min = *array1[0];
    for (int i = 0; i < rows; i++) {
        if (array1[i][i] >= max) { max = array1[i][i]; }
        if (array1[i][i] <= min) { min = array1[i][i]; }
    }

    cout << "\n��������� �������: " << min;
    cout << "\n����i����� �������: " << max;
    cout << "\n�i����� �i� ��������� i ����i����� ��������� ��������� ������i: " << min - max;
}