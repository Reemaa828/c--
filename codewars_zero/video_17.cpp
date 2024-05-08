#include <iostream>
#include <vector>

using namespace std;

int sum_two_array(vector<int>vect1,vector<int>vect2){
    int sum=0;
    for(int i=0;i<vect1.size();i++){
        sum+=vect1[i];
    }
    for(int i=0;i<vect2.size();i++){
        sum+=vect2[i];
    }
    return sum;
}

string count_sheep(int a){
    string ss="";
    for(int i=1;i<=a;i++){
        ss+=to_string(i)+" sheep...";
    }
    return ss;
}

bool feast(string animal,string dish){
    if(animal.at(0)==dish.at(0)){
        if(animal.back()==dish.back()){
            return true;
        }
    }
    return false;
}
int main(){
    // vector<int>vect1={1,2,3};
    // vector<int>vect2={1,2,3};
    // cout<<sum_two_array(vect1,vect2);
    // cout<<count_sheep(3);
    cout<<feast("great blue harron","galic naan");

}