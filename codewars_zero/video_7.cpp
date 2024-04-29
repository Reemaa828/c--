#include <iostream>
#include <algorithm>
using namespace std;

int str_count(string word,char n){
   
    return count(word.begin(),word.end()-1,n);
}

long long int past(int h,int m, int s){

    return (h*60*60*1000+m*60*1000+1000*s);
}

string alternating_case(string word){
    for(int i=0;i<word.size();i++){
        if(islower(word.at(i))){
           word.at(i)=toupper(word.at(i));
        }
        else{
           word.at(i)=tolower(word.at(i));
        }
    }
    
    return word;
}

int main(){
   // cout<<str_count("reeeeema",'o');
   // cout<<past(0,1,1);
   cout<<alternating_case("111122131");
}