
// Пригадаємо гру: "Придумай слово", в якій з букв слова-донора складають інші слова. Наприклад, із слова
// МОНІТОР можна одержати МОТОР, РОТ, ТИР і ін.Входження кожної букви в нове слово допускається
// не більше того числа раз, з яким вона входить в слово - донор.Нехай дана послідовність слів, розділених
// пропусками у вигляді рядка символів.Відомо, що перше слово в цьому рядку є донором.Вибрати із слів
// послідовності, що залишилися, ті, які можна одержати із заданого слова - донора.

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    string s;
    cout << "Введiть слово донор i слова створенi iз донора: ";
    getline(cin, s);
    cout << s << endl;

    string first_word = s.substr(0, s.find(' '));


    string temp = "";
    char del = ' ';

    for (int i = s.find(' ') + 1; i < (int)s.size(); i++) {

        if (s[i] != del) {
            temp += s[i];
        }
        else {

            for (int j = 0; j < temp.length(); j++) {
                if (first_word.find(temp[j]) == string::npos) {
                    cout << temp << "  - слово не пiдходить\n";
                    break;
                }


            }

            temp = "";
        }

    }

    for (int j = 0; j < temp.length(); j++) {
        if (first_word.find(temp[j]) == string::npos) {
            cout << temp << " - слово не пiдходить\n";
            break;
        }


    }

}