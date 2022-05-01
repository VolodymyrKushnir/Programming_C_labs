#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int array1[5][5] = { { 1,2,3,4,5 },
        {10,9,8,7,6},
        {11,12,13,14,15},
        {20,19,18,17,16},
        {21,22,23,24,25}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }
}