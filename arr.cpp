#include <iostream>
using namespace std;

int main(){
    string arr[]={"B123","C234","A345","C15","B177","G3003","C235","B179"};

    for(auto i : arr){
      if( i[0]=='B'){
        cout<<i<<endl;
      }
    }
    return 0;
}