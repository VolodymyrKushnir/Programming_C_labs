#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int array1[100];

    cout << "Array 1:";
    for (int i = 0; i < 100; i++) {
        array1[i] = 1 + rand() % 50;

        cout << "\n[" << i << "]" << ": " << array1[i];
    }
    cout << '\n';

    int count = 0;
    cout << "Зворотнiй порядок по 6 елементiв: \n";
    for (int i = 99; i >= 0; i--) {

        if (count == 6) {
            cout << endl;
            count = 0;
        }
        count++;
        cout << array1[i] << " ";

    }


}