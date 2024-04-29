#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;


int liters(double hours){
    return hours*0.5;
}

int grow(vector <int> vecct){
    int total=1;
    for(int x: vecct){
        total*=x;
    }
    return total;
}

int string_to_number(string word){
    return stoi(word);
}

int main(){
    // vector<int>vect={1,2,3,4};
    // cout<<grow(vect);
   // cout<<liters(0.5);

   cout<<string_to_number("1234");

}