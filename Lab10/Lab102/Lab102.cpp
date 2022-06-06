#include <iostream>
#include <iterator>
#include <string>
#include <fstream>
#include <set>
#include <algorithm>
#include <windows.h>

using namespace std;

using std::string;

auto length_comp = [](const string& x, const string& y)
{
    return x.size() > y.size();
};

using set_t = std::set<string, decltype(length_comp)>;
using input = std::istream_iterator<string>;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream ifs("exemple.txt");
    if (!ifs.is_open())
    {
        std::cerr << "Файл не знайдено.\n";
        return 1;
    }
    set_t set{ input(ifs), input(), length_comp };

    std::cout << "Найдовше слово це: \"" << *set.begin() << "\"\n";

    std::ofstream out("exemple.txt", std::ios::app);
    if (out.is_open())
    {
        out << "\n""\n" "Найдовше слово це: \"" << *set.begin() << "\"\n";
    }
    out.close();
}