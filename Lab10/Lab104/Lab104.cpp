#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    string line;

    cout << "Данi з файлу:\n";
    ifstream in("f.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();

    string resultLine;

    string delimiter = ", ";
    size_t pos = 0;
    string token;
    string line2 = line;
    int size = 1;
    while ((pos = line.find(delimiter)) != string::npos) {
        token = line.substr(0, pos);
        line.erase(0, pos + delimiter.length());
        size++;
    }

    double* array = new double[size];
    int k = 0;
    while ((pos = line2.find(delimiter)) != string::npos) {
        token = line2.substr(0, pos);
        line2.erase(0, pos + delimiter.length());
        array[k] = stod(token);
        k++;
    }
    array[size - 1] = stod(line);

    int count = 1;

    for (int i = 1; i < size; i++) {
        if (array[i] < array[i - 1]) {
            count++;
        }
        else if (array[i] > array[i - 1]) {
            if (count == 1) continue;
            resultLine += to_string(count) + ", ";
            count = 1;
        }
    }
    if (count != 1) {
        resultLine += to_string(count);
    }
    cout << "Результат: \n" << resultLine;

    ofstream out;
    out.open("out.txt");
    if (out.is_open())
    {
        out << resultLine << endl;
    }

    return 0;
}