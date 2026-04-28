#include "rectangle.h"

 Rectangle::Rectangle(int a, int b){
   mWidth = a;
   mHeight = b;
}
int Rectangle::Area(){
    return mWidth * mHeight;
}