#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double result = 0;
    int n;
    cout << "������ n: ";
    cin >> n;
    int x;
    cout << "������ x: ";
    cin >> x;

    for (int i = 1; i <= n; i++) {
        double a;
        cout << "������ a" << "[" << i << "]: ";
        cin >> a;
        if (a == x) result++;
    }

    cout << result;
}