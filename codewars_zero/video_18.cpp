#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> count_monkeys(int a){
    vector<int>vect1;
    for(int i=1;i<=a;i++){
        vect1.push_back(i);
    }
    return vect1;
}

string sum_strings(string s1,string s2){
    int x=(stoi(s1.empty()?"0":s1)+stoi(s2.empty()?"0":s2));
    return to_string(x);
}

int parse_int(string word){
   // return stoi(word);
   return word[0]-'0';
}

int main(){
    // vector<int>vect1=count_monkeys(1);
    // for(int i=0;i<vect1.size();i++){
    //     cout<<vect1.at(i);
    // }
    //cout<<sum_strings("","9");
    cout<<parse_int("4 years");

}