#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double result = 0;
    int n;
    cout << "����i�� n: ";
    cin >> n;
    int x;
    cout << "����i�� x: ";
    cin >> x;

    for (int i = 1; i <= n; i++) {
        double a;
        cout << "����i�� a" << "[" << i << "]: ";
        cin >> a;
        if (a == x) result++;
    }

    cout << result;
}