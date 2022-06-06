#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    int number, counter = 0;
    string word;

    ifstream fin("exemple.txt");
    if (!fin.is_open()) {
        cout << "File isn't found." << endl;
        system("pause");
        return 0;
    }

    cout << "Enter number words: ";
    cin >> number;
    if (!number)
        return 0;
    string* sentence = new string[number];


    while (!fin.eof())
    {
        fin >> word;
        sentence[(counter++) % number] = word;

        if (word.find_first_of(".!?") != string::npos)
        {
            if (counter == number) {
                for (int i = 0; i < number; i++)
                    cout << sentence[i] << " ";
                cout << endl;
            }
            counter = 0;
            word = "";
        }
    }

    system("pause");
    return 0;
}