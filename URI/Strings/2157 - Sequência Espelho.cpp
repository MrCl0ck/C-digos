//https://www.urionlinejudge.com.br/judge/pt/problems/view/2157
/*
    Sequência Espelho
Por Ricardo Martins, IFSULDEMINAS BR Brazil

Timelimit: 1
Imprimir números em sequência é uma tarefa relativamente simples. Mas, e quando se trata de uma sequência espelho? Trata-se de uma sequência que possui um número de início e um número de fim, e todos os números entre estes, inclusive estes, são dispostos em uma sequência crescente, sem espaços e, em seguida, esta sequência é projetada de forma invertida, como um reflexo no espelho. Por exemplo, se a sequência for de 7 a 12, o resultado ficaria 789101112211101987

Escreva um programa que, dados dois números inteiros, imprima a respectiva sequência espelho.

Entrada
A entrada possui um valor inteiro C indicando a quantidade de casos de teste. Em seguida, cada caso apresenta dois valores inteiros, B e E (1 ≤ B ≤ E ≤ 12221), indicando o início e o fim da sequência.

Saída
Para cada caso de teste, imprima a sequência espelho correspondente.

Exemplo de Entrada
3

1 5

10 13

98 101

Exemplo de Saída
1234554321

1011121331211101

98991001011010019989
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int C, B, E;

    cin>>C;

    for(int i=0;i<C;++i){
        cin>>B>>E;

        string valores, resultado;

        for(int j=B; j<=E; ++j){
            valores += to_string(j);
        }

        resultado = valores;

        reverse(valores.begin(), valores.end());//reverte a string, ex: se for "12345" vira "54321".

        resultado += valores;

        cout<<resultado<<"\n";
    }

	return 0;
}
