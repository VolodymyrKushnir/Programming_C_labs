#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <regex>

using namespace std;

int main()
{
    ifstream ifs{ "exemple.txt" };
    if (!ifs) return -1;

    string text{istreambuf_iterator<char>{ifs}, {} };

    map<ptrdiff_t, string> dict;
    auto rgx_word = regex{ "\\s+" };
    auto pb = sregex_token_iterator{ text.cbegin(), text.cend(), rgx_word, -1 };
    auto pe = sregex_token_iterator{};
    while (pb != pe)
    {
        dict.insert_or_assign(pb->length(), pb->str());
        ++pb;
    }
    if (!dict.empty()) cout << dict.begin()->second;
}