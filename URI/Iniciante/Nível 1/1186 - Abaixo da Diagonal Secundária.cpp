//https://www.urionlinejudge.com.br/judge/pt/problems/view/1186
/*
    Abaixo da Diagonal Secundária
Por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão abaixo da diagonal Secundária da matriz, conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

Exemplo de Entrada
S
1.0
0.0
-3.5
2.5
4.1
...

Exemplo de Saída
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
