#include <iostream>
using namespace std;

string table_multiplication(int a){
    string s="";
        for(int j=0;j<=10;j++){
            s+=to_string(a)+'*'+to_string(j)+" = "+to_string(a*j)+(j<10?"\n":"");
        }
    return s;
}
string bounus(int salary,bool state){
   return state?"$"+to_string(salary*10):"$"+to_string(salary);
}

int opposite_number(int a){
    return a*-1;
}
int main(){
    //cout<<bounus(1000,true);
    //cout<<opposite_number(5);
   // cout<<table_multiplication(5);

}