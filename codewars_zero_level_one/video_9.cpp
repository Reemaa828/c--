#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int count_sheep(vector<bool>arr){
    int count=0;
    for(int nums: arr){
        if(nums){
            count++;
        }
    }
    return count;
}

int square_sum(vector<int>vect){
    vector<int>::iterator ite;
    int sum=0;
    for(ite=vect.begin();ite<vect.end();ite++){
        sum+=pow(*ite,2);
    }
    return sum;

}

int odd_count(int n){
    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(i%2!=0){
    //         count++;
    //     }
    // }
    return n/2;
}

int main(){
    // vector<bool>vect={true,false,true,true};
    // cout<<count_sheep(vect);
    // vector<int>vecr={1,2,2};
    // cout<<square_sum(vecr);
    cout<<odd_count(4);

}