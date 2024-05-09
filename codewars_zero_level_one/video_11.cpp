#include <iostream>
using namespace std;

bool survive(int bullets,int dragons){
    if(bullets/2>=dragons){
        return true;
    }
    else 
    return false;
}

int main(){
    cout<<survive(0,1);

}