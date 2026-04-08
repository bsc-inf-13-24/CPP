#include <iostream>
using namespace std;

int main () {

    //null pointer

    int *pPointer = nullptr;

    int numberArray[3] = {10,20,30};

    //assign address of first element to pointer
    pPointer = numberArray;

    //output the address of the first element
    cout << "address at pointer: " << pPointer <<endl;
    cout << "address of numberArray[0]: " << numberArray << endl;

    //output the value of the first element using the pointer and indirection
    cout <<"value at pPointer: "<< *pPointer<< endl;
    
    //this output the value of second element
    cout << "value at ++pPointer" << *(++pPointer) << endl;

    //assign address of first element to pointer

   // pPointer = numberArray;

    //this output the value of the first element
    cout << "value at pPointer: " << *(pPointer++) <<endl;

    return 0;

}