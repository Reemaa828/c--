#include <iostream>
using namespace std;

string correct_text(string word){
    for(int i=0;i<word.size();i++){
        switch(word.at(i)){
            case '5': word.at(i)='s';break;
            case '1': word.at(i)='i';break;
            case '0': word.at(i)='o';break;
        }
    }
    return word;
}

string rock_paper_scissor(string player1, string player2){
    string msg="";
    string p1="p1 wins";
    string p2="p2 wins";
    string no="draw";
    if(player1==player2)
    {
        msg=no;
    }
    if(player1=="paper"){
        if(player2=="rocks"){
            msg=p1;
        }
        else if(player2=="scissor"){
            msg=p2;
        }
    }
    
    if(player1=="rocks"){
        if(player2=="scissor"){
            msg=p1;
        }
        else if(player2=="paper"){
            msg=p2;
        }
    }
    
    if(player1=="scissor"){
        if(player2=="paper"){
            msg=p1;
        }
        else if(player2=="rocks"){
            msg=p2;
        }
    }
    return msg;
    
}

int main(){

    //cout<<correct_text("remm5ahsh1ndnms0df");
    cout<<rock_paper_scissor("rocks","scissor");

}