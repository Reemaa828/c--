#include <iostream>
#include <array>
#include <vector>
#include <numeric>
using namespace std;

int sum_of_array(vector<int>vee){
    
    return accumulate(vee.begin(),vee.end(),0);
}

int football(array<string,10>arr){
    string ss="";
    int points=0;
    for(int i=0;i<arr.size();i++){
        ss=arr.at(i);
        if(ss[0]>ss[2]){
            points+=3;
        }
        else if (ss[0]==ss[2]){
               points+=1;
        }
    }
    return points;
}

int main(){
    //string ss="3:1";
    cout<< football({"1:0","2:0","3:0","4:0","2:1","3:1","4:1","3:2","4:2","4:3"});
    //cout<<sum_of_array({1,2,3,4});
}