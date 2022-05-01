#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int array1[100];
    int array2[100];
    cout << "Array 1: \t Array2:";
    for (int i = 0; i < 100; i++) {
        array1[i] = 1 + rand() % 50;
        array2[i] = 1 + rand() % 50;
        cout << "\n[" << i << "]" << ": " << array1[i] << " \t" << "[" << i << "]" << ": " << array2[i];
    }
    cout << '\n';

    int temp1 = 0, temp2 = 0, temp3 = 0;
    cout << "¬ведiть номер елемента в 1 масивi €кий потрiбно обмiн€ти: ";
    cin >> temp1;
    cout << "¬ведiть номер елемента в 2 масивi €кий потрiбно обмiн€ти: ";
    cin >> temp2;
    temp3 = array1[temp1];
    array1[temp1] = array2[temp2];
    array2[temp2] = temp3;

    cout << "Array 1: \t Array2:";
    for (int i = 0; i < 100; i++) {
        cout << "\n[" << i << "]" << ": " << array1[i] << " \t" << "[" << i << "]" << ": " << array2[i];
    }
}