#include <iostream>
using namespace std;
string switch_it(int a){
    switch(a){
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "error";
    }
}

bool flowers(int f1,int f2){
    // if(f1%2==0&&f2%2!=0){
    //     return true;
    // }
    // else if(f2%2==0&&f1%2!=0){
    //     return false;
    // }
    // return false;
    return f1%2!=f2%2;
}
 
int grasshoper(int current_pos,int roll_dice){
    return current_pos+roll_dice*2;
}
int main(){
    //cout<<switch_it(3);
    cout<<grasshoper(3,6);
   // cout<<flowers(3,3);

}