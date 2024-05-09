#include <iostream>
#include <regex>
using namespace std;


int how_many(int father_age, int child_age ){
   return abs(father_age-2*child_age);
}

string dna_rna(string word){
   // regex pattern("[tT]");
    replace(word.begin(),word.end(),'T','u');
   // return regex_replace(word,pattern,"U");
   return word;
}
int main(){
   // cout<<how_many(55,30);
   cout<<dna_rna("GCAT");

}