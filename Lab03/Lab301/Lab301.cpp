#include <iostream>

using namespace std;

void swap(float *pf1, float *pf2){
    double temp = *pf1;
    *pf1 = *pf2;
    *pf2 = temp;
}

int main(){
    setlocale(LC_CTYPE, "ukr");
    float a, b;
    cout << "¬ведiть a i b: ";
    cin >> a >> b;
    float *pf1 = &a, *pf2 = &b;
    *pf1 *= 3;

    swap(*pf1,*pf2);
   
    cout << *pf1 << endl;
    cout << *pf2 << endl;

}
