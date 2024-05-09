#include <iostream>
#include <math.h>
using namespace std;
int multiplyy(int a){ 
    // if(i%2==0){
    //     return a*8;
    // }
    // else{
    //     return a*9;
    // }
    return a%2==0?a*8:a*9;
    }
int centurayy(int a){
    // if(a%100==0){
    //     return a/100;
    // }
    // else{
    //     return (a/100.0)+1;
    // }
    return ceil(a/100.0);
}
bool divisable(int a,int b, int c){
    // if(a%b==0&&a%c==0){
    //     cout<<"divisible by "<<b<<" and "<<c;
    //     return true;
    // }
    // else if(a%b==0){
    //      cout<<"divisible by "<<b;
    //      return false;
    // }
    // else{
    //     cout<<"divisible by "<<c;
    //     return false;
    // }
    return a%b==0&&a%c==0;

}


int main(){
    int i,b,c;

    while(true){
    cout<<'\n'<<"enter the number: ";
    cin>>i>>b>>c;
   // cout<<multiply(i);
   // cout<<centurayy(i);
     cout<<divisable(i,b,c);
    }
   

}