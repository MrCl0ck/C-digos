//https://www.urionlinejudge.com.br/judge/pt/problems/view/1072
/*
    Intervalo 2
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando essas informa��es.

Entrada
A primeira linha da entrada cont�m um valor inteiro N (N < 10000), que indica o n�mero de casos de teste.
Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).


Sa�da
Para cada caso, imprima quantos n�meros est�o dentro (in) e quantos valores est�o fora (out) do intervalo.

Exemplo de Entrada
4
14
123
10
-25

Exemplo de Sa�da
2 in
2 out
*/
#include <iostream>

using namespace std;

int main(){
    int N, in = 0, out = 0;

    cin>>N;

    for(int i=0, x=0; i<N; ++i){
        cin>>x;

        if(x>=10 && x<=20){
            in++;
        }
        else{
            out++;
        }
    }

    cout<<in<<" in" <<"\n";
    cout<<out<<" out" <<"\n";

	return 0;
}
