//https://www.urionlinejudge.com.br/judge/pt/problems/view/1047
#include <iostream>

using namespace std;

int main(){
    int in1, in2, ou1, ou2;

    cin>>in1>>in2>>ou1>>ou2;

    if(ou1<in1){
        if(ou2<in2){
            cout<<"O JOGO DUROU " <<((24+ou1)-in1-1) <<" HORA(S) E "<<((60+ou2)-in2)<<" MINUTO(S)\n";
        }
        else if(ou2>in2){
            cout<<"O JOGO DUROU " <<((24+ou1)-in1) <<" HORA(S) E "<<(ou2-in2)<<" MINUTO(S)\n";
        }
        else{
            cout<<"O JOGO DUROU " <<((24+ou1)-in1) <<" HORA(S) E "<<0<<" MINUTO(S)\n";
        }
    }
    else  if(ou1>in1){
        if(ou2<in2){
            cout<<"O JOGO DUROU " <<(ou1-in1-1) <<" HORA(S) E "<<((60+ou2)-in2)<<" MINUTO(S)\n";
        }
        else if(ou2>in2){
            cout<<"O JOGO DUROU " <<(ou1-in1) <<" HORA(S) E "<<(ou2-in2)<<" MINUTO(S)\n";
        }
        else{
            cout<<"O JOGO DUROU " <<(ou1-in1) <<" HORA(S) E "<<0<<" MINUTO(S)\n";
        }
    }
    else{
        if(ou2<in2){
            cout<<"O JOGO DUROU " <<((24+ou1)-in1-1) <<" HORA(S) E "<<((60+ou2)-in2)<<" MINUTO(S)\n";
        }
        else if(ou2>in2){
            cout<<"O JOGO DUROU " <<0 <<" HORA(S) E "<<(ou2-in2)<<" MINUTO(S)\n";
        }
        else{
            cout<<"O JOGO DUROU " <<((24+ou1)-in1) <<" HORA(S) E "<<0<<" MINUTO(S)\n";
        }
    }

	return 0;
}
