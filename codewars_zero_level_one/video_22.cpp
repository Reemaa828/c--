#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum_highest_lowest(vector<int>vee){
    sort(vee.begin(),vee.end());
    int sum=0;
    for(int i=1;i<vee.size()-1;i++){
        sum+=vee.at(i);
    }
    return sum;
}

int smallest_integer(vector<int>vee){
    sort(vee.begin(),vee.end());
    return vee.front();
}

int main(){
    vector<int>vee1={3,4,5,6,9,1};
    cout<<smallest_integer(vee1);
    //cout<<vee1.at(1);
    //cout<<vee1.size();
    //cout<<sum_highest_lowest(vee1);
}