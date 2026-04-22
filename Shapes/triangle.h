#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace Shape{

    class Triangle{
        private:
           float base;
           float height;

        public:
           Triangle();
           Triangle(float b,float h);
           ~Triangle();

           void setBase(float bas);
           void setHeight(float hei);

           float getBase();
           float getHeight();
    };
   
    
}
#endif