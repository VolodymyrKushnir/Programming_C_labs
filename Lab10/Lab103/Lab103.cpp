#include <iostream>
#include <fstream> 
using namespace std;

int main()
{
    ifstream fin("f.txt");

    if (fin.is_open())
    {
        int k = 0;
        char ch1 = fin.get();
        char ch2 = fin.get();

        if (ch1 >= '1' && ch1 <= '9') { k++; cout << "first symbol is digit\n" };
        else cout << "first symbol is not digit\n";

        if (ch2 >= '1' && ch2 <= '9') { k++; cout << "second symbol is digit\n" };
        else cout << "second symbol is not digit\n";

        if (k == 2 && ch2 % 2 == 0) cout << "number " << ch1 << ch2 << " is even\n";
        else if (k == 2) cout << "number " << ch1 << ch2 << " is odd\n";
    }
    else cout << "Unable to open file\n";

    system("pause");
    return 0;
}