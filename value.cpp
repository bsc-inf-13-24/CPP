#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the value between 5 and 10"<<endl;

    while (true)
    {
         cin>>num;
         
         if(cin.fail()){
            cout<<"invalid input try again :"<<endl;
            cin.clear();              // reset error state
            cin.ignore(1000,'\n');  // remove bad input
         }else{
             if (num>=5 && num<=10){
            cout<<"your input value "<<"("<<num<<")"<< " has accepted"<<endl;
            break;
        
        }else{
            cout<<"value must be between 5 and 10"<<endl;
        }
    }
         }
       
    return 0;
}