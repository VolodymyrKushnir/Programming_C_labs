#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    ifstream fin("f.txt");

    if (fin.is_open())
    {
        int k = 0;
        char ch1 = fin.get();
        char ch2 = fin.get();

        if (ch1 >= '1' && ch1 <= '9') {
            k++; cout << "Перший символ це цифра\n";
        }
        else cout << "Перший символ це не цифра\n";


        if (ch2 >= '1' && ch2 <= '9') {
            k++; cout << "Другий символ це цифра\n";
        }
        else cout << "Другий символ це не цифра\n";

        if (k == 2 && ch2 % 2 == 0) { cout << "Число " << ch1 << ch2 << " є парним\n"; }
        else if (k == 2) cout << "Число " << ch1 << ch2 << " є непарним\n";
    }
    else cout << "Файл не знайдено.\n";

    return 0;
}