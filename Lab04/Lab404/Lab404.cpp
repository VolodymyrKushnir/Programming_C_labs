
// В квадратному масиві записані цілі числа. Визначити суму елементів головної діагоналі, які
// закінчуються на цифру 7.

#include <iostream>
#include <string>
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

    int sum = 0;
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        if (to_string(array1[i][i])[to_string(array1[i][i]).length() - 1] == '7') {
            sum += array1[i][i];
        }

    }
    cout << "Сума елементiв головної дiагоналi, якi закiнчуються на цифру 7: ";
    cout << sum;
}