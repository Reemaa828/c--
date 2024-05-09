#include <iostream>
#include <string>
#include <regex>
using namespace std;

string replace_with(string digits){
    for(int i=0;i<digits.size();i++){
        if(digits.at(i)<'5'){
            digits.at(i)='0';
        }
        else{
            digits.at(i)='1';
        }
    }
    return digits;
}

string  replace_with_exlamation(string word){
    // for(int i=0;i<word.size();i++){
    //     if(word.at(i)=='a'||word.at(i)=='A'||word.at(i)=='E'||word.at(i)=='e'||word.at(i)=='I'||word.at(i)=='i'||word.at(i)=='u'||word.at(i)=='U'||word.at(i)=='o'){
    //         word.at(i)='!';
    //     }
    // }
    // return word;
    regex pattern("[aieuoAIEUO]");
    
   return regex_replace(word,pattern,"!");


}

int main(){
    //cout<<replace_with("15889923");
    cout<<replace_with_exlamation("aieour");

}