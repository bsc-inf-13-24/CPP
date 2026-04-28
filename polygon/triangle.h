#include "polygon.h"
#pragma Once

class Triangle: public Polygon{
    public:
        Triangle(int b, int h);
        int Area();
};