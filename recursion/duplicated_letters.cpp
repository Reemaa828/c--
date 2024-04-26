#include <iostream>
using namespace std;
string tryy(string word){ //"wwwoooorrldd"
    if(word.length()==1){
      
        return word;
        
    }
   
    if(word.at(0)==word.at(1)){
        word.erase(0,1);
        
        return tryy(word);
     
    }
    else
    {
     
        return word[0]+tryy(word.substr(1));
        
    }

}



int main(){
    string namess="wwwoooorrldd";
    
    cout<<tryy(namess);


}




