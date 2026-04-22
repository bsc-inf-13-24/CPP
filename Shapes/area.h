#ifndef AREA_H
#define AREA_H

#include "square.h"
#include "circle.h"
#include "triangle.h"

class Area {

    public: 
       static float squareArea(Shape::Square sqr );
       static float triangleArea(Shape::Triangle tri);
       static float  circleArea(Shape::Circle circ);
};
   #endif                        