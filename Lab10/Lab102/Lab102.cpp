#include <iostream>
#include <iterator>
#include <string>
#include <fstream>
#include <set>
#include <algorithm>
#include <windows.h>

using namespace std;

using string;

auto length_comp = [](const string& x, const string& y)
{
    return x.size() > y.size();
};

using set_t = set<string, decltype(length_comp)>;
using input = istream_iterator<string>;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream ifs("exemple.txt");
    if (!ifs.is_open())
    {
        cerr << "���� �� ��������.\n";
        return 1;
    }
    set_t set{ input(ifs), input(), length_comp };

    cout << "�������� ����� ��: \"" << *set.begin() << "\"\n";

    ofstream out("exemple.txt", ios::app);
    if (out.is_open())
    {
        out << "\n""\n" "�������� ����� ��: \"" << *set.begin() << "\"\n";
    }
    out.close();
}