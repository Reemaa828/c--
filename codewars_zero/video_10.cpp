#include <iostream>
#include <vector>

using namespace std;

int building_floor(int a)
{
    if(a<=0)
     return a;
     else if(a>13)
        return a-=2;
     else 
        return a-=1;
}

double average(vector<int>vect){
    double avg=0,sum=0;
    for(int i=0;i<vect.size();i++){
        sum+=vect.at(i); 
    }
    avg=sum/vect.size();
    return avg;
}

int negative(int a){
    // if(a<0){
    //     return a;
    // }
    // else {
    //     return -a;
    // }
    return a<0?a:-a;
}


int main(){
    // vector<int>vev={};
    //cout<<building_floor(15);
    // cout<<average(vev);
    cout<<negative(-1);

}