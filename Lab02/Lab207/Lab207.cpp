#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double result = 0;
    int n;
    cout << "������ n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double a;
        cout << "������ a" << "[" << i << "]: ";
        cin >> a;
        if (i % 2 == 0) result = result - a;
        else result = result + a;
    }

    cout << result;
}