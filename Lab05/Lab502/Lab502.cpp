
// —класти алгоритм, що зам≥нюЇ перше ≥ останнЇ слова у даному реченн≥ даним словом.

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    string s;
    size_t first_pos;
    string first_word;

    cout << "¬ведiть реченн€ на ангiйськiй у €кому Ї 2 i бiльше слiв: ";
    getline(cin, s);

    first_pos = s.find(' ');
    first_word = s.substr(0, first_pos);

    string word;
    cout << "¬ведiть слово що замiнить перше i останнi слова в реченнi: ";
    getline(cin, word);
    s.replace(s.begin(), s.begin() + first_pos, word);
    s.replace(s.begin() + s.rfind(' ') + 1, s.end(), word);

    cout << s << endl;
}