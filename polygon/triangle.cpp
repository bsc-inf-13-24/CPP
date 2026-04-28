#include "triangle.h"

Triangle::Triangle(int b, int h){
    mWidth = b;
     mHeight = h;
}
int Triangle::Area(){
    return mWidth * mHeight/2;
}