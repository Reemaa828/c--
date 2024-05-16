#include <iostream>
#include <math.h>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> count(vector<int>vee){
    vector<int>arr(2);
    if(vee.size()==0){
       return {}; 
    } 
    for(int i=0;i<vee.size();i++){
        if(vee.at(i)>=0){
            arr.at(0)++;
        
        }else{
            arr.at(1)+=vee.at(i);

        }
    }
    return arr;
}

int expressio_matter(int a,int b,int c){
    return max({a*(b+c),a+b+c,(a+b)*c,a*b+c,a*b*c,a+b*c});
}
bool pythagoren_triple(array<int,3>arr){
    // int z=max(arr[0],arr[1],arr[2]);
    // if(pow(arr[0],2)+pow(arr[1],2)==pow(z,2)){
    //     return true;
    // }
    // else if(pow(arr[1],2)+pow(arr[2],2)==pow(z,2)){
    //     return true;
    // }
    // else if(pow(arr[0],2)+pow(arr[2],2)==pow(z,2)){
    //     return true;
    // }
    // return false;
    return arr[0]*arr[0]+arr[1]*arr[1] and arr[2]*arr[2];
    }

int main(){
    // vector<int>vee={};
    // vector<int>arr=count(vee);
    // cout<<arr[0]<<arr[1];
   // cout<<expressio_matter(1,2,3);
   array<int,3>arr{4,3,5};
   cout<<pythagoren_triple(arr);

}



