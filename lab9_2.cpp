#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 int main(){
     ifstream source;
     source.open("//Users//worwee07//Documents//CompPro//lab9//lab9-2562-2-worsrp//cheerbook.txt");
     string textline,cheerbook,nl="\n";
     while(getline(source,cheerbook)){
         textline = textline + cheerbook  + nl;
     }
     source.close();
     ofstream dest("//Users//worwee07//Documents//CompPro//lab9//lab9-2562-2-worsrp//cheerbook_copy.txt");
     dest << "-------------------- SOTUS ---------------------\n";
     dest << textline;
     dest << "-------------------- SOTUS ---------------------";
     dest.close();
     return 0;

 }
