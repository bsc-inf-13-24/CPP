#include "area.h"

 float Area::squareArea(Shape::Square sqr ){
    return sqr.getSide() * sqr.getSide();
 }

float Area::triangleArea(Shape::Triangle tri){
    return (0.5 *  tri.getBase() * tri.getHeight());
}
 float  Area::circleArea(Shape::Circle circ){
    return (3.14 * circ.getRadius() * circ.getRadius());
 }                                   