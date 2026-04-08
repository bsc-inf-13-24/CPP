#include <iostream>
using namespace std;

int main () {
    int *intvar = new int;
    string *stringvar = new string;
    
    cout << "enter the interger: ";
    cin >> *intvar;

    cout << "enter the string: ";
    cin >> *stringvar;

    cout << "dynamic allocated integer: "<< *intvar <<endl;
    cout << "dynamic allocated string: "<< *stringvar <<endl;

    delete intvar;
    delete stringvar;

    return 0;
}