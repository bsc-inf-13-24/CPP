#ifndef SQUARE_H  // If SQUARE_H is NOT defined
#define SQUARE_H  // Then define it

namespace Shape{

    class Square {
       private:
          float side_length;

       public:
          Square();
          Square(float s);
          ~Square();

          void setSide(float side);
          float getSide();

    };
} 
#endif  // End of header guard