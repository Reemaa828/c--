#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int power(int n,int w){
    int x=1;
    for(int i=0;i<w;i++){
        x*=n;
    }
    return x;
}
vector<int> power_of_e(int n){
    vector<int>vee;
    for(int i=0;i<=n;i++){
      
        vee.push_back(power(2,i));
    }
    return vee;
}
string colors_traffic(string traffic){
    string color[]={"green","yellow","red"};
    for(int i=0;i<2;i++){
        if(traffic==color[i]){
            return color[i+1];
        }
    }
    return color[0];
}
int main(){
    // vector<int>vee=power_of_e(5);
    // for(int i=0;i<vee.size();i++){
    //     cout<<vee.at(i);
    // }
   // cout<<power(2,3);
   // cout<<colors_traffic("red");
}