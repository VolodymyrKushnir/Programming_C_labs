#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double result = 0;
    int n;
    cout << "¬ведiть n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double a;
        cout << "¬ведiть a" << "[" << i << "]: ";
        cin >> a;
        if (i % 2 == 0) result = result - a;
        else result = result + a;
    }

    cout << result;
}