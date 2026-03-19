#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int dayUntillExpiration = rand() %12;

    switch (dayUntillExpiration)
    {
    case 1:
        cout<<"your subscription expires within a day \n"
       <<"renew now and save 20%! \n";
        break;
    case 2:
    case 3:
    case 4:
    case 5:
           cout<<"your subscription expires in "<< dayUntillExpiration<<"\n"
        <<"renew now and save 10%!\n";
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
          cout<<"your subscription will expire soon. Renew now!"<<endl;
          break;
    default:
          cout<<"you have an active subscription"<<endl;
        break;
    }

    return 0;
}