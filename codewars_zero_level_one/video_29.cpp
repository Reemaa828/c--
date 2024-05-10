#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
  std::array<std::string,3>vee;
//   int j=0;
//   for(int i=arr.size()-1;i>=0;i--){
//      vee.at(j)=arr[i];
//     j++;
//   }
    swap(arr[2],arr[0]);
   // reverse(arr.begin(),arr.end());
    return arr;
}

int collatz_conjecture(int a){
  int count=0;
  while(a!=1){
    if(a%2==0){
      a/=2;
    }else{
      a=3*a+1;
    }
  count++;
  }
  return count;
}
int main(){
   // array<int,5>arr={5,4,55,2,6};
   // sort(arr.rend(),arr.rbegin());
   // array<string,3>arr=fixTheMeerkat(reem);
   // cout<<arr[0]<<arr[1]<<arr[2];
   cout<<collatz_conjecture(1);

}