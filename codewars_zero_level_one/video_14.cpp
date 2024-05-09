#include <iostream>
#include <vector>
using namespace std;

string initials_name(string name){
    string nnn="";
    int i=0;
   for( i=0;i<name.size();i++){
       if(name[i]==' '){
         break;
       }
   } 
   nnn+=toupper(name[0]);
   nnn+=".";
   //nnn+=toupper(name[i+1]);
   nnn+=toupper(name[name.find(" ")+1]);
   return nnn;
}

string touppercase(string word){
    int i=0;
    while(word[i]!='\0'){
        word[i]=toupper(word[i]);
        i++;
    }
    return word;
}

bool isavaiable(vector<char>vect1,char n){
    for(int i=0;i<vect1.size();i++){
        if(vect1.at(i)==n){
            return true;
        }
    }
    return false;
}

int main(){
    //string ss;
   // getline(cin,ss);
   // cout<<initials_name(ss);
   //cin>>ss;
    //cout<<touppercase(ss);
    vector<char>vecc={'1','2','3','a','b'};
    cout<<isavaiable(vecc,'c');

}