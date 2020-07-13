//https://www.urionlinejudge.com.br/judge/pt/problems/view/1803
/*
    Matring
Por M.C. Pinto, UNILA BR Brazil

Timelimit: 1
Matring é uma mistura de Matriz e String. Ela foi desenvolvida pela UNILA (União dos Nerds para Integração da Lógica e da Aventura) para manter mensagens seguras de escutas.

A primeira e última coluna de uma matring guarda a chave para traduzi-la na mensagem original. As colunas restantes de uma matring representam uma string codificada em ASCII, uma coluna por caractere.

Para uma mensagem com N caracteres, a matring correspondente é uma matriz 4x(N+2) de dígitos. Cada coluna é lida como um número de 4 dígitos; uma sequência de dígitos de cima para baixo é o mesmo que uma sequência de dígitos da esquerda para a direita na horizontal.

Seja o primeiro número F, o último número L e os restantes uma sequência de números Mi, onde 1 ≤ i ≤ N. A primeira coluna de uma matring é indexada por zero.

Para decodificar uma matring para uma string, calculamos: Ci = (F * Mi + L) mod 257, onde Ci é o caractere em ASCII na posição i da mensagem original.

Sua tarefa é desenvolver um algoritmo para decodificar matrings.

Entrada
A entrada é uma matring, ou seja, uma matriz 4x(N+2) de dígitos (de 0 a 9) com 0 < N < 80.

Saída
A saída é dada em uma única linha e corresponde a string decodificada. Inclua o caractere de fim-de-linha após a string.

Exemplos de Entrada	Exemplos de Saída
41805               OBI
99934
39127
23659

5686702             UNILA
0531447
5115038
2795214

28665943            Hodor!
68409984
86877400
51804393
*/
#include <iostream>

using namespace std;

int main(){
    int N;
    string linhas[4];

    for(int i=0; i<4; ++i){
        cin>>linhas[i];
    }
    N = linhas[0].size();
    int num_col[79+2] = {0};

    for(int i=0; i<N; ++i){
        num_col[i] = (linhas[0][i] - '0')*1000 + (linhas[1][i] - '0')*100 + (linhas[2][i] - '0')*10 + (linhas[3][i] - '0')*1;
    }

    for(int i=1; i<=N-2; ++i){
        cout<<char((num_col[0]*num_col[i]+num_col[N-1])%257);
    }

    cout<<"\n";

	return 0;
}
