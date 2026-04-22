#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"
#include <iostream>
#include <string>
using namespace std;

int main () {
     int option;
    do{
        
        cout<<"SELECT THE CHOICE------"
            <<"1.Calculate the area of square"
            <<"2.Calculate the area of triangle"
            <<"3.Calculate the area of circle"<<endl;
        cin>>option;

        if(option==1){
           float s;
            cout << "Enter side: ";
            cin >> s;

            Shape::Square sq;
            sq.setSide(s);

            cout << "Area = " << Area::squareArea(sq) << endl;  
        }
          else if (option == 2) {
            float b, h;
            cout << "Enter base and height: ";
            cin >> b >> h;

            Shape::Triangle t;
            t.setBase(b);
            t.setHeight(h);

            cout << "Area = " << Area::triangleArea(t) << endl;
        }

        else if (option == 3) {
            float r;
            cout << "Enter radius: ";
            cin >> r;

            Shape::Circle c;
            c.setRadius(r);

            cout << "Area = " << Area::circleArea(c) << endl;
        }
       
    }while (option !=4);

    return 0;
    
    
}