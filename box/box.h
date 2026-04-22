#pragma once

class Box{

    public:
       
       Box();
       Box(const double newLength, const double newBreadth, const double newHeight);
       ~Box();
       
       double getVolume();

       void setLength(double len);

       void setBreadth(double bre);

       void setHeight(double hei);

       // overload + operator to add two Box objects
       Box operator+(const Box& b);

    private:
       double length;
       double breadth;
       double height;
};