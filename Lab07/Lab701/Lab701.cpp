#include <iostream>

using namespace std;

double PowerN(double X, int N) {
    if (N == 0)
        return 1;
    if (N < 0)
        return PowerN(1/X, -N);
    else return X * PowerN(X, N - 1);
}


int main()
{
    setlocale(LC_CTYPE, "ukr");
    double X;
    int N;
    cout << "����i�� X (�i����) i N (�i��): ";
    cin >> X >> N;
    while (X == 0) {
        cout << "X �� ���� ���������� 0!" << "\n" << "����i�� X:";
        cin >> X;
        cin.ignore();
    }
    cout << PowerN(X, N);
}