#include <iostream>
#include <vector>
using namespace std;

char get_char(int a){
    return a;
}

int nth_even_num(int a){
    int i=1;
    int num=0;
    for(;i<a;i++){
      num+=2;
    }
    return num;
}

vector<int> what_in_between(int a,int b){
    vector<int>vect;
    //int i=0;
    for(;a<=b;a++){
       // vect.at(i)=a; //use it when there is a list or vector with known size
       // i++;
       vect.push_back(a); //increase size of vector
    }
    return vect;
}


int main(){
    //cout<<get_char(97);
    //cout<<nth_even_num(1);
    vector<int>vect1=what_in_between(-2,2);
    vector<int>::iterator ite;
    for(ite=vect1.begin();ite<vect1.end();ite++){
        cout<<*ite;
    }

}