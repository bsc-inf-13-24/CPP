#include "square.h"
#include <iostream>
#include <string>
using namespace std;
using namespace Shape;

Square::Square(){
    side_length = 0;
}

Square::Square(float s){
     side_length = s;
}

void Square::setSide(float side){
    side_length = side;
}

float Square::getSide(){
    return side_length;
}
Square::~Square(){
    
}
