#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double result = 0;

    for (int i = 1; i <= 10; i++) {

        for (int j = 1; j <= i; j++) {
            if (j == i) {
                result += (1 / i); break;
            }
            result *= (i + j);
        }

    }

    cout << "Результат: " << result;

}