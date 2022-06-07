
// Дано натуральне число п та послідовність дійсних чисел а1,а2,...,ап. Визначити усі числа, взяті по одному
// з кожної групи однакових чисел.


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int size;
    cout << "Введiть розмiр послiдовностi: ";
    cin >> size;

    double* array = new double[size];
    cout << "Введiть послiдовнiсть iз " << size << " елементiв: " << endl;
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << "Послiдовнiсть:\n";

    for (int i = 0; i < size; i++)
        cout << array[i] << "   ";

    cout << "\nГрупи однакових чисел: \n";
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