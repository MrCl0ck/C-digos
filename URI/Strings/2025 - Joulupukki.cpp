//https://www.urionlinejudge.com.br/judge/pt/problems/view/2025
#include <iostream>
#include <string>
using namespace std;

int main(){
    int linhas;
    string busca = "oulupukk", frases;

    cin>>linhas;
    cin.ignore();

    for(int i=0; i< linhas; ++i){
        getline(cin, frases);

        int p = frases.find(busca);//caso tenha encontrado toda a substring na string maior ele retorna a posição do primeiro caracter na string, caso contrário -1.

        while(p != -1){
            if(frases[p-1] != 'J'){
                frases[p-1] = 'J';
            }
            if(frases[p+8] != 'i'){
                frases[p+8] = 'i';
            }
            p = frases.find(busca,p+1);
        }

        cout<<frases<<"\n";
    }



	return 0;
}
