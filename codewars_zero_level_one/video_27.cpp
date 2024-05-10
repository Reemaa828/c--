#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> revrsed(long int a){
    vector<int>vee;
    
    while(a!=0){
        int x=a%10;
        vee.push_back(x);
        a/=10;
    }
    return vee ;
}

bool ispanlindon(string word){
   // return toupper(word.front())==toupper(word.back());
   for(int i=0;i<word.size();i++){
        if(toupper(word.at(i))!=toupper(word.at(word.size()-1-i))){
            return false;
        }
   }
   return true;
}

string reverse_sentence(string word){
    // vector<string>vee;
    // string ss="";
    // for(int i =0;i<word.size();i++){
    //     if(word.at(i)==' '){
    //         vee.push_back(ss);
    //         ss="";

    //     }
    //     else{
    //         ss+=word.at(i);
    //     }
    // }
    // vee.push_back(ss);
    // ss="";
    // for(int i=vee.size()-1;i>=0;i--){
    //     ss+=vee.at(i)+" ";
    // }
    // return ss;
    string ss="";
    string temp;
    for(int i=0;i<word.size();i++){
        if(word.at(i)==' '){
            temp=ss+" "+temp;
            ss="";
        }
        else{
            ss+=word.at(i);
        }
    }
    temp=ss+" "+temp;
    temp.pop_back();
    return temp;
}

int main(){
    // vector<int>vee=revrsed(35231);
    // for(int i=0;i<vee.size();i++){
    //     cout<<vee.at(i);
    // }
    // cout<<ispanlindon("ABBa");
    cout<<reverse_sentence("reem is beatidul and pretty");

}
