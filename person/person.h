#pragma once
#include <string>
using namespace std;

class Person{

    public:
       Person();
       Person(string newName, float newWeight);

       ~Person();
       //overload the add operator
       float operator + (const Person& othrePerson);
      
       bool operator == (const Person& otherPerson );

       bool operator != (const Person& otherPerson);

       bool operator < (const Person& otherPerson);

       bool operator > (const Person& otherPerson);

       operator int ();
       operator string ();
       operator float ();

    private:
       float mWeight;
       string mFirstName;
       int mAge;
};