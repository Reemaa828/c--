#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
    vector<int>vect1={10,20,30,40,50};
    vector<int>::iterator ite=vect1.begin();
    //auto itte=vect1.begin()+1;
    //cout<<*vect1.begin()<<endl;
    //cout<<*(ite+1)<<endl;
    //cout<<*itte<<endl;
   // vect1.push_back(110);
    //vect1.clear();
   // vect1.erase(ite,ite+3);
//     advance(ite,2);

//    // cout<<*ite;
//     for(;ite<vect1.end();ite++){
//         cout<<*ite<<endl;
//     }
//     cout<<*(vect1.end()-1)<<endl;
    cout<<ite[1];
}