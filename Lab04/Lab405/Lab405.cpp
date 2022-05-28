
// Дано квадратну дійсну таблицю розмірності п. Обчислити кількість максимальних елементів.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    int size;
    cout << "Введiть розмiр квадратної матрицi:";
    cin >> size;
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

    int max = array1[0];
    int k = 1;
    for (int i = 1; i < cows; i++)
    {
        if (array1[i] > max)
        {
            max = array1[i];
            k = 1;
        }
        else if (array1[i] == max)
            ++k;
    }
    cout << "Кiлькiсть максимальних елементiв:";
    cout << k;
}