#include "circle.h"
#include <iostream>
#include <string>
using namespace std;
using namespace Shape;

Circle::Circle(){
    radius = 0;
}
Circle::Circle(float r){
    radius = r;
}

void Circle::setRadius(float rad){
    radius = rad;
}
float Circle::getRadius(){
    return radius;
}

Circle::~Circle(){
    
}