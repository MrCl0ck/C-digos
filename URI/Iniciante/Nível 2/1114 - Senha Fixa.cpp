//https://www.urionlinejudge.com.br/judge/pt/problems/view/1114
#include <iostream>

using namespace std;

int main(){
    int n;

    while(cin>>n){
        if(n == 2002){
            cout<<"Acesso Permitido\n";
            break;
        }
        else{
            cout<<"Senha Invalida\n";
        }
    }

	return 0;
}
