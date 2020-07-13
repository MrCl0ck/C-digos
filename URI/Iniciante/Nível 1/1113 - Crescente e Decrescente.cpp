//https://www.urionlinejudge.com.br/judge/pt/problems/view/1113
#include <iostream>

using namespace std;

int main(){
    int x, y;

    while(cin>>x>>y){
        if(x>y){
            cout<<"Decrescente"<<"\n";
        }
        else if(x<y){
            cout<<"Crescente"<<"\n";
        }
    }

	return 0;
}
