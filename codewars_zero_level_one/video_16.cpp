#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sum_differences(vector<int>vect1){
    int sum=0;
     sort(vect1.rbegin(),vect1.rend());
     if(vect1.size()<=1){
        return 0;
     }
    for(int i=0;i<vect1.size()-1;i++){
       
        sum+=vect1[i]-vect1[i+1];
       
    }
    return sum;

}

int main(){
    vector<int>vee={1,1,1,1};
    cout<<sum_differences(vee);
}