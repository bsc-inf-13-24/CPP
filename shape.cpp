#include <iostream>
using namespace std;

void tri(float base, float height)
{
    float area = 0.5 *( base * height);
    cout<<"area of triangle is: "<<area<<endl;
}

void lect(float lenght, float width)
{
    float area = lenght * width;
    cout<<"area of lectangle is: "<<area<<endl;
}

void square(float side){
    float area = side * side;
    cout<<"area of square is: "<<area<<endl;
}

int main(){
    int option;
    float num1;
    float num2;
    
   
    do
    {
      cout<<endl;
         cout<<"please select the shape to calculate the area \n";
    cout<<"1.Square \n"
        <<"2.Rectangle \n"
        <<"3.Triangle \n"
        <<"4.quite the program"<<endl;
   cout<<endl;
         cin>>option;

         if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
         }
         else
         {
           if(option==1){
            cout<<"enter the value of square side: ";
            cin>>num1;
            if(cin.fail()){
               cout<<"not an integer, enter a valid number:"<<endl;
                cin.clear();
               cin.ignore(1000, '\n');
               continue;
            }
            square(num1);
         }
         else if (option==2)
         {
            cout<<"enter the length: ";
            cin>>num1;
            if(cin.fail()){
               cout<<"not an integer, enter a valid number:"<<endl;
               cin.clear();
               cin.ignore(1000, '\n');
               continue;
            }
            cout<<"enter the width: ";
            cin>>num2;
            if(cin.fail()){
               cout<<"not an integer, enter a valid number:"<<endl;
               cin.clear();
               cin.ignore(1000, '\n');
               continue;
            }
            lect(num1,num2);
         }
         else if (option==3)
         {
            cout<<"enter the base: ";
            cin>>num1;
            if(cin.fail()){
               cout<<"not an integer, enter a valid number:"<<endl;
                cin.clear();
               cin.ignore(1000, '\n');
               continue;
            }
            cout<<"enter the height: ";
            cin>>num2;
            if(cin.fail()){
               cout<<"not an integer, enter a valid number:"<<endl;
                cin.clear();
               cin.ignore(1000, '\n');
               continue;
            }
            tri(num1,num2);
         }
         else if (option==4)
         {
            break;
         }
         else{
            cout<<"invalid option try agin"<<endl;
         }
         
         
         }
         
         
    } while (true);
    cout<<"program has quited"<<endl;

    return 0;
    
}