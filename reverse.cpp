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
//after this the file is at the end and the pointer is at the end
   cout<<char_count<<endl;
   filedata.clear();//reset the file
   filedata.seekg(0);//bring the pointer at start

   while (filedata>>data){
     string_count ++;
   }

   cout<<string_count<<endl;

    filedata.close();

    return 0;
}

void reverse()