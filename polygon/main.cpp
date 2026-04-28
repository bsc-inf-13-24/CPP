#include "rectangle.h"
#include "triangle.h"
#include <iostream>
using namespace std;

int main () {
    Rectangle rect;
    Triangle trgl;

    rect.SetValues(4,5);
    trgl.SetValues(4,5);

    cout <<"rectangle area: "<<rect.area() << "\n";
    cout <<"triangle area: "<< trgl.area() << "\n";

    return 0;
}