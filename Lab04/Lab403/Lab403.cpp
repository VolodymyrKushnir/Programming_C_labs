
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

    int* array = new int[size];
    cout << "Введiть послiдовнiсть iз " << size << " елементiв: " << endl;
    for (int i = 0; i < size; i++)
        cin >> array[i];

}