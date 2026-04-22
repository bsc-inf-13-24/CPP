#include "person.h"
#include <iostream>
using namespace std;

int main () {
    Person Jane = Person("Jane",60.05f);
    Person John =Person("John",75.5f);

    float totalWeight = Jane + John;

    cout << "Total Weight:" <<totalWeight<<endl;

    if (Jane == John){
        cout << "this is the same person"<<endl;
    }

    if (Jane != John){
        cout << "this is NOT the same person"<<endl;
    }

    if (Jane < John){
        cout <<"Jane is younger than John"<<endl;
    }

    if  (Jane > John){
        cout << "Jane is order than John";
    }

    int JonhAge = John;
    cout << "john's age: "<<JonhAge<<endl;

    string janeFirstName = Jane;
    cout <<"jane's firstname: "<< janeFirstName<<endl;

    float janeWeight = Jane;
    cout <<"jane's weight: "<<janeWeight<<endl;

    return 0;
}