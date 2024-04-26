#include <iostream>
using namespace std;

int summ_of_elements(int arr[],int size){
    
    if (size==0){
        return 0;
    }
    return arr[size-1]+summ_of_elements(arr,size-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<summ_of_elements(arr,5);
}