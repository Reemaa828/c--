#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int price_mangoes(int mangoes_num,int price_per_unit){
    return (mangoes_num-mangoes_num/3)*price_per_unit;
}

int quarter_year(int months){
    switch (months)
    {
    case 1:
    case 2:
    case 3: return 1; 
    case 4:
    case 5:
    case 6: return 2; 
    case 7:
    case 8:
    case 9: return 3; 
    case 10:
    case 11:
    case 12: return 4; 
    default: return -1;
    }

}

vector<int> invert_values(vector<int> vect){
    vector<int>::iterator ite;
    for(ite=vect.begin();ite<vect.end();ite++){
        (*ite)*=-1;
        
    }
    return vect;

}



int main(){
    int x,y;
    // cin>>x>>y;
    // cout<<price_mangoes(x,y);
   // cin>>x;
   // cout<<quarter_year(x);
//    vector<int>vect={1,2,3,4,5};
//     vector<int> vect2=invert_values(vect);
//   vector<int>::iterator ite=vect2.begin();
//    for(;ite<vect2.end()-1;ite++){
//        cout<<(*ite);
//     }
}