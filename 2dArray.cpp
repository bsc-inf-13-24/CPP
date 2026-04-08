#include <iostream>
using namespace std;

int main () {
    double *twoDArray = nullptr;
    int row = 0;
    int column = 0;

    cout << "enter the size of row: ";
    cin >> row;

    cout << "enter the size of column: ";
    cin >> column;

    if ((row >3 || row<= 0) || (column>3 ||column<=0)){
        cout << "invalid input: dimension should not be greater than 3 and less than or 0"<<endl;
        return 1; //program end because of an error
    }

    twoDArray = new double [row * column]; //using a 1D array as a 2d array

    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout << "enter the values ["<< i << "]["<< j << "]: ";
            cin >> twoDArray[i * column + j];// Store the user's value in the correct row and column position
        }
    }
    for (int i = 0 ; i < row; i++){
        for (int j = 0; j < column; j++){
            cout << twoDArray[i * column + j]<< " ";
        }

        cout <<endl;
    }
    delete [] twoDArray;

    return 0;
}