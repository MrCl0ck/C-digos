/*
    Cifra de César
By TopCoder*  USA

Timelimit: 1
Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava cada letra pelo equivalente em duas posições à Esquerda no alfabeto (por exemplo, 'C' vira 'A', 'T' vira 'R', etc.). Ao começo do alfabeto nós voltamos para o fim, isto é 'A' vira 'Y'. Nós podemos, é claro, tentar trocar as letras com quaisquer número de posições.

Entrada
A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste é composto por duas linhas. A primeira linha contém uma string com até 50 caracteres maiúsculos ('A'-'Z'), que é a sentença após ela ter sido codificada através desta Cifra de César modificada. A segunda linha contém um número que varia de 0 a 25 e que representa quantas posições cada letra foi deslocada para a direita.

Saída
Para cada caso de teste de entrada, imprima uma linha de saída com o texto decodificado (transformado novamente para o texto original) conforme as regras acima e o exemplo abaixo.

Exemplo de Entrada
6
VQREQFGT
2
ABCDEFGHIJKLMNOPQRSTUVWXYZ
10
TOPCODER
0
ZWBGLZ
25
DBNPCBQ
1
LIPPSASVPH
4

Exemplo de Saída
TOPCODER
QRSTUVWXYZABCDEFGHIJKLMNOP
TOPCODER
AXCHMA
CAMOBAP
HELLOWORLD
*/

#include <iostream>
using namespace std;


int main(){
    int casos, deslocamento;
    string frase;

    cin>>casos;

    for(int i=0;i<casos;++i){
        cin>>frase>>deslocamento;
        for(int j=0, test=0;j<frase.size();++j){
            test =
            if(int(frase[j]) - deslocamento < 65){
                frase[j] = char(frase[j]+26-deslocamento);
            }
            else{
                frase[j] = char(frase[j]-deslocamento);
            }
        }
        cout<<frase<<"\n";
    }

    return 0;
}
