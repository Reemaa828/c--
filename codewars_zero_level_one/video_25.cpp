#include <iostream>
#include <vector>
using namespace std;

vector<string> string_to_array(string word){
    vector<string>vee;
    string ss="";
    for(int i=0;i<word.size();i++){

        if(word.at(i)!=' '){
            
            ss+=word.at(i);
            if(i==word.size()-1){
                vee.push_back(ss);
            }
        }
        else{
            vee.push_back(ss);
            ss="";
        }
    }
   // vee.push_back(ss);
    return vee;
}




int main(){
    vector<string> vee1=string_to_array("i love this hghhehe");
    for(int i=0;i<vee1.size();i++){
       cout<<vee1.at(i)<<'\n';
    }

}