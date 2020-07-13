/*
URI Online Judge | 1630
Estacas
Por Jeferson Tiepo, UNOESC BR Brazil

Timelimit: 1
Marcos trabalha em uma empreiteira, sua tarefa é cercar com estacas os terrenos onde serão construidos prédios. Existem duas restrições para a distribuição destas estacas, elas devem ser colocadas de tal forma que a distância entre duas estacas seja sempre igual, e a segunda restrição é que Marcos deve usar o menor número possível de estacas. Marcos é seu amigo e pediu para que você desenvolva um programa para ajudá-lo.

Entrada
Haverão diversos casos de teste, cada caso de teste é descrito em uma linha por dois números X e Y (1 ≤ X, Y ≤ 100000000), os quais representam as dimensões do terreno. O final da entrada é indicado por final de arquivo.

Saída
Para cada caso de teste imprima uma linha com o número mínimo de estacas necessário para cercar o tereno.

Exemplo de Entrada
2 2
3 3
2 5
8 3
76 50

Exemplo de Saída
4
4
14
22
126

II Maratona FACE 2014

*/

#include <iostream>
using namespace std;

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    return mdc(b, a%b);
}

int main(){
    long int x, y;
    long long int resultado = 0;

    while(cin>>x>>y){
        resultado = (2*(x+y))/mdc(x,y);

        cout<<resultado<<"\n";
    }

    return 0;
}
