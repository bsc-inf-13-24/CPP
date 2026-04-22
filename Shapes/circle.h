#ifndef CIRCLE_H
#define CIRCLE_H

namespace Shape{

    class Circle{

        private:
           float radius;

        public:
           Circle();
           Circle(float r);
           ~Circle();
           
           void setRadius(float rad);
           float getRadius ();

    };
   
    
}
#endif