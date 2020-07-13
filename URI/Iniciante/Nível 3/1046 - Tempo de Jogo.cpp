//https://www.urionlinejudge.com.br/judge/pt/problems/view/1046
#include <iostream>

using namespace std;

int main(){
    int in, ou;

    cin>>in>>ou;

    if(ou<=in){
        cout<<"O JOGO DUROU " <<((24+ou)-in) <<" HORA(S)\n";
    }
    else{
        cout<<"O JOGO DUROU " <<ou-in <<" HORA(S)\n";
    }

	return 0;
}
