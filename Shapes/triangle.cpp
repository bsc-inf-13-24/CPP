#include "triangle.h"
#include <iostream>
#include <string>
using namespace std;
using namespace Shape;

Triangle::Triangle(){
    base = 0;
    height = 0;
}

Triangle::Triangle(float b, float h){
    base = b;
    height = h;
}

void Triangle::setBase(float bas){
    base = bas;
}
void Triangle::setHeight(float hei){
    height = hei;
}

float Triangle::getBase(){
    return base;
}
float Triangle::getHeight(){
    return height;
}
Triangle::~Triangle(){

}