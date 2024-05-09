#include <iostream>
using namespace std;

string funcc_even_odd(int a){
    if(a%2==0)
        return "even\n";
    else
        return "odd\n";
}

string funcc_Reverse(string word){
    string reverse_string=word;
    int j=word.size()-1;
    for(int i=0;i<word.size();i++){
        reverse_string[j]=word[i];
        j--;
    }
    return reverse_string;

}


string reverssed(string word){
    string rev=" ";
    for(int i=word.size()-1;i>=0;i--){
        rev+=word[i];
    }
    return rev;
}

string funcc_boolean(bool a){
    return a?"true":"false";
}

int main(){
    //int i;
   // string s;
    //cout<<endl<<"enter the number "<<endl;
    //cin>>s;
    //cout<<funcc_even_odd(i);
   // string s=funcc_Reverse("world");
   //cout<<string(s.rbegin(),s.rend());

    //cout<<s;
   // cout<<reverssed("world");
  // cout<<funcc_boolean(2>5);


}