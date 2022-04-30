#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    setlocale(LC_CTYPE, "ukr");

    double result = 0;
    vector <int> x = { 1,1,1 };
    for (int i = 1; i <= 16; i++) {
        if (i >= 4) x[i] = x[i - 1] - x[i - 3];
        x.push_back(x[i]);
        cout << x[i] << " ";
        result += x[i] / factorial(i);
    }

    cout << "\n Результат: " << result;

}