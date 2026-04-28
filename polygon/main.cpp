#include "rectangle.h"
#include "triangle.h"
#include <iostream>
using namespace std;

int main () {
    Rectangle rect;
    Triangle trgl;

    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;

    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);

    cout <<"rectangle area: "<<rect.area() << "\n";
    cout <<"triangle area: "<< trgl.area() << "\n";

    return 0;
}