#include <iostream>
#include <vector>
using namespace std;

string remove_exclamation(string word){
    string s="";
    // for(int i=0;i<word.size();i++){
    //     if(word.at(i)=='!'){
    //        // word.erase(i,1);
    //        continue;
    //     }
    //     s+=word[i];
    // }
    // return s;
    for(char c:word){
        if(c!='!'){
            s.push_back(c);
            
        }
    }
    return s;
}

int max(vector<int>vect){
    int max_num=vect.at(0);
    for(int x:vect){
        if(x>max_num){
            max_num=x;
        }
    }
    return max_num;
}
int min(vector<int>vect){
    int min_num=vect.at(0);
    for(int x:vect){
        if(x<min_num){
            min_num=x;
        }
    }
    return min_num;
}


int main(){
    // vector<int>vect={5,4,3,2,1};
    // cout<<max(vect)<<" "<<min(vect);

}