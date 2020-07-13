//https://www.urionlinejudge.com.br/judge/pt/problems/view/1070
/*
    Seis Números Ímpares
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.

Exemplo de Entrada
8

Exemplo de Saída
9
11
13
15
17
19
*/
#include <iostream>

using namespace std;

int main(){
    int X;

    cin>>X;

    for(int i=0,j=X; i<6; ++j){
        if(j%2!=0){
            cout<<j<<"\n";
            ++i;
        }
    }

	return 0;
}
