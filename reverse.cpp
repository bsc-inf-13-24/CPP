#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

string Reverse(string filedata)
{
    string reversed;
    for (int i = filedata.length() -1; i >=0 ; i--){
        reversed += filedata[i];
    }
    return reversed;
}

int main () {
    char chara;
    string data;
    int char_count=0;
    int string_count = 0;
    ifstream filedata;

    filedata.open("rev.txt");
    
   while(filedata>>chara){
    chara = tolower(chara);
    if(chara == 'a' || chara == 'e' || chara == 'i' || chara == 'o' || chara == 'u'){
        char_count++;
    }
   }
//after this the file is at the end and the pointer is at the end
   cout<<"VOWEL COUNT: "<<char_count<<endl;
   filedata.clear();//reset the file
   filedata.seekg(0);//bring the pointer at start

   while (filedata>>data){
     string_count ++;
   }
   cout<<endl;
   cout<<"WORDS COUNT: "<<string_count<<endl;
   filedata.clear();
   filedata.seekg(0);
  
   getline(filedata,data); 
    //while loop to read the whole line
    cout<<endl;
   string reverse_string = Reverse(data);
   cout<<"REVERSE FILE: "<< reverse_string << endl;
   cout<<endl;
   filedata.clear();
   filedata.seekg(0);

   cout<<"2nd letter capitalize: "<<endl;
   while (filedata>>data)
   {
    data[1] = toupper(data[1]);
    cout<< data << " ";
  }
  cout<<endl;

    filedata.close();

    
    return 0;
 }

