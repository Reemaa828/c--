#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string sort_and_star(vector<string>vee){
    sort(vee.begin(),vee.end());
    string ss=vee.front();
    // string s="";
    // for(int i=0;i<ss.size();i++){
    //     s+=ss[i];
    //     s+="***";
    // }
    // return s; r***eem
    for(int i=1;i<ss.size();i+=4){
        ss.insert(i,"***");
    }
    return ss;
}

vector<int> reversed_sequence(int a){
    vector<int>vee;
    for(int i=a;i>0;i--){
        vee.push_back(i);
    }
    return vee;
}

int main(){
   // vector<string>vee={"bpple","anna","car"};
    vector<int>vee1=reversed_sequence(1);
    for(int i=0;i<vee1.size();i++){
        cout<<vee1.at(i);
    }
    //cout<<sort_and_star(vee);
}
