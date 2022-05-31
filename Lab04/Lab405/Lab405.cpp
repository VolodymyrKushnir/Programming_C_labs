
// Дано квадратну дійсну таблицю розмірності п. Обчислити кількість максимальних елементів.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    const int rows = 5, cows = 5;

    int array1[rows][cows];

    cout << "Введiть елементи матрицi: " << rows << "x" << cows << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cows; j++) {
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "] = ";
            cin >> array1[i][j];
        }
    }

    cout << "\nМатриця: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cows; j++) {
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }

    int max = array1[0][0];
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++) {
            if (array1[i][j] > max)
            {
                max = array1[i][j];
                k = 1;
            }
            else if (array1[i][j] == max)
                ++k;
        }
    }
    cout << "Кiлькiсть максимальних елементiв:";
    cout << k;
}