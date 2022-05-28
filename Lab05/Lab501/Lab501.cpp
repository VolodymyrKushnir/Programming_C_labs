
// У даному тексті всі послідовності крапок замінити на одну крапку.

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    string s;
    cout << "Введiть текс на англiйськiй який мiстить послiдовнiсть крапок:" << "\n";
    getline(cin, s);

    for (int i = s.size() - 1; i > 0; i--)
        if (s[i] == '.' && s[i - 1] == '.') s.erase(i, 1);

    cout << s << "\n";
}