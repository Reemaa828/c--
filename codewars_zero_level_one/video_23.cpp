#include <iostream>
#include <vector>
using namespace std;

int sum_positive(vector<int>ve1){
    int sum=0;
    for(int i=0;i<ve1.size();i++){
        if(ve1.at(i)<0){
            continue;
        }
        sum+=ve1.at(i);
    }
    return sum;
}

int main(){

    vector<int>vee={};
    cout<<sum_positive(vee);

}
