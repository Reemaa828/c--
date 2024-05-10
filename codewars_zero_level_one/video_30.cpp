#include <iostream>
#include <array>
#include <vector>
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
    return a*(b+c)>a*b*c?
}



int main(){
    vector<int>vee={};
    vector<int>arr=count(vee);
    cout<<arr[0]<<arr[1];

}



