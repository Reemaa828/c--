#include <iostream>
using namespace std;
bool zero_fuel(unsigned int distance_to_pump,unsigned int mpg, unsigned int fuel_left){
    return mpg*fuel_left>=distance_to_pump;
}

bool is_uppercase(string word){
    int i=0;
    while(isupper(word.at(i))){

        if(i==word.size()-1){
            return true;
        }
        i++;
    }
    return false;
}

int main(){
   // cout<<zero_fuel(100,50,1);
   //cout<<(int)is_uppercase("RAm");

}