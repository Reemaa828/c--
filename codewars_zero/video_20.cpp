#include <iostream>
#include <vector>
using namespace std;

vector<int> count_by_x(int x,int n){
    vector<int> vee;
    for(int i=1;i<=n;i++){
        vee.push_back(x*i);
    }
    return vee;
}

int main(){
    // vector<int>veee=count_by_x(0,0);
    // for(int i=0;i<veee.size();i++){
    //     cout<<veee.at(i);
    // }
    
}



