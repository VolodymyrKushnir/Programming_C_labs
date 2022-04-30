#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    double result = 0;
    int n;
    cout << "¬вед≥ть n: ";
    cin >> n;
    int x;
    cout << "¬вед≥ть x: ";
    cin >> x;

    for (int i = 1; i <= n; i++) {
        double a;
        cout << "¬вед≥ть a" << "[" << i << "]: ";
        cin >> a;
        if (a == x) result++;
    }

    cout << result;
}