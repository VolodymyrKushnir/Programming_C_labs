#include "Lab05.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

void Lab05()
{
    setlocale(LC_CTYPE, "ukr");
    string s;
    cout << "¬ведiть текс на англiйськiй €кий мiстить послiдовнiсть крапок:" << "\n";
    getline(cin, s);

    for (int i = s.size() - 1; i > 0; i--)
        if (s[i] == '.' && s[i - 1] == '.') s.erase(i, 1);

    cout << s << "\n";
}