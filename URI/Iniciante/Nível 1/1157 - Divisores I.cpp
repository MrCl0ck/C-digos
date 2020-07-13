//https://www.urionlinejudge.com.br/judge/pt/problems/view/1157
/*
    Divisores I
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Ler um n�mero inteiro N e calcular todos os seus divisores.

Entrada
O arquivo de entrada cont�m um valor inteiro.

Sa�da
Escreva todos os divisores positivos de N, um valor por linha.

Exemplo de Entrada	Exemplo de Sa�da
6                   1
                    2
                    3
                    6
*/
#include <iostream>

using namespace std;

int main(){
    int N;

    cin>>N;

    for(int i=1; i<=N; ++i){
        if(N%i==0)
            cout<<i<<"\n";
    }

	return 0;
}
