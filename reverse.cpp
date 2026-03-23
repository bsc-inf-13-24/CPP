#include <iostream>
#include <fstream>

using namespace std;

int main () {
    char chara;
    string data;
    int char_count=0;
    int string_count = 0;
    fstream filedata;

    filedata.open("rev.txt");
    
   while(filedata>>chara){
    //cout<<chara;
    chara = tolower(chara);
    if(chara == 'a' || chara == 'e' || chara == 'i' || chara == 'o' || chara == 'u'){
        char_count++;
    }
   }

   cout<<char_count<<endl;
   filedata.clear();
   filedata.seekg(0);

   while (filedata>>data){
     string_count ++;
   }

   cout<<string_count<<endl;

    filedata.close();

    return 0;
}