//https://www.urionlinejudge.com.br/judge/pt/problems/view/1115
#include <iostream>

using namespace std;

int main(){
    int x, y;

    while(cin>>x>>y && x && y){//recebe até que x e y forem diferentes de 0
        if(x>0 && y>0){
            cout<<"primeiro\n";
        }
        else if(x>0 && y<0){
            cout<<"quarto\n";
        }
        else if(x<0 && y>0){
            cout<<"segundo\n";
        }
        else if(x<0 && y<0){
            cout<<"terceiro\n";
        }
    }

	return 0;
}
