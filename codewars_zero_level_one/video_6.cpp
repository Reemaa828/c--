#include <iostream>
#include <algorithm>
using namespace std;

string slice_string(string word){
    word.erase(word.begin());
    word.erase(word.end()-1);
 
    return word;
}

string repeat(string word,int num){
    string s="";
    for(int i=0;i<num;i++){
        s+=word;
    }
    return s;
}

string remove_spaces(string word){
    string s="";
    for(int i=0;i<word.size();i++){
        if(isspace(word[i])){
            continue;
        }
        s+=word[i];
    }
    return s;
}

int main(){
    // cout<<slice_string("heelo eemmr");
    // cout<<repeat("heelo",6);
    // cout<<remove_spaces("heelo sjdjs dsds ");

}