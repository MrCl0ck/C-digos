//https://www.urionlinejudge.com.br/judge/pt/problems/view/1186
/*
    Abaixo da Diagonal Secund�ria
Por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um caractere mai�sculo, que indica uma opera��o que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a m�dia considerando somente aqueles elementos que est�o abaixo da diagonal Secund�ria da matriz, conforme ilustrado abaixo (�rea verde).




Entrada
A primeira linha de entrada contem um �nico caractere Mai�sculo O ('S' ou 'M'), indicando a opera��o (Soma ou M�dia) que dever� ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que comp�em a matriz.

Sa�da
Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.

Exemplo de Entrada
S
1.0
0.0
-3.5
2.5
4.1
...

Exemplo de Sa�da
12.6
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char O;
    float matriz[12][12] = {0}, total = 0;

    cin>>O;

    for(int i=0; i<12; ++i){
        for(int j=0; j<12; ++j){
            cin>>matriz[i][j];
        }
    }

    for(int i=1, j=11; i<12; ++i, --j){
        for(int k=11; k>=j; --k){
            total += matriz[i][k];
        }
    }

    if(O == 'S'){
        cout<<fixed<<setprecision(1)<<total<<"\n";
    }
    else if(O == 'M'){
        cout<<fixed<<setprecision(1)<<(total/66)<<"\n";
    }

	return 0;
}
