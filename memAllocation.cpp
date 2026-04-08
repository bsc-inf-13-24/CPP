#include <iostream>
using namespace std;

int main () {
    int numberOfElements = 0;
    int *dynamicArray = nullptr;

    cout << "how many numbers would you like to type? ";
    cin >> numberOfElements;

    dynamicArray = new int [numberOfElements];

    if (dynamicArray == nullptr)
    {
        cout << "Error: memory could not be allocated";
    }
    else
    {
        for (int i =0; i < numberOfElements; i++){
            cout << "enter number: ";
            cin >> dynamicArray[i];
        }
        cout << "you have entered: ";
        for (int j =0; j< numberOfElements; j++){
            cout << dynamicArray[j];

            //to avoid comma to be printed at the end
            if (j < numberOfElements-1){
                cout<<",";
            }
        }
        delete [] dynamicArray;
    }

    return 0;
}