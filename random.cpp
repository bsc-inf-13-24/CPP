#include <iostream>
#include <cstdlib>// for rand() and srand()
#include <ctime>// for time(), to seeds generator
using namespace std;

int main (){
    srand(time(0));
    int dayUntilExpiration = rand()%12;
    if (dayUntilExpiration==1){
       cout<<"your subscription expires within a day \n"
       <<"renew now and save 20%! \n";
    }
    else if (dayUntilExpiration <=5)
    {
        cout<<"your subscription expires in "<< dayUntilExpiration<<"\n"
        <<"renew now and save 10%!\n";
    }
    else if (dayUntilExpiration <=10)
    {
        cout<<"your subscription will expire soon. Renew now!"<<endl;
    }
    else
    {
        cout<<"you have an active subscription"<<endl;
    }
    
    

    return 0;
}