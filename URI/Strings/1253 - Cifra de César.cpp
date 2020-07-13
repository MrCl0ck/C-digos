/*
    Cifra de C�sar
By TopCoder*  USA

Timelimit: 1
J�lio C�sar usava um sistema de criptografia, agora conhecido como Cifra de C�sar, que trocava cada letra pelo equivalente em duas posi��es � Esquerda no alfabeto (por exemplo, 'C' vira 'A', 'T' vira 'R', etc.). Ao come�o do alfabeto n�s voltamos para o fim, isto � 'A' vira 'Y'. N�s podemos, � claro, tentar trocar as letras com quaisquer n�mero de posi��es.

Entrada
A entrada cont�m v�rios casos de teste. A primeira linha de entrada cont�m um inteiro N que indica a quantidade de casos de teste. Cada caso de teste � composto por duas linhas. A primeira linha cont�m uma string com at� 50 caracteres mai�sculos ('A'-'Z'), que � a senten�a ap�s ela ter sido codificada atrav�s desta Cifra de C�sar modificada. A segunda linha cont�m um n�mero que varia de 0 a 25 e que representa quantas posi��es cada letra foi deslocada para a direita.

Sa�da
Para cada caso de teste de entrada, imprima uma linha de sa�da com o texto decodificado (transformado novamente para o texto original) conforme as regras acima e o exemplo abaixo.

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

Exemplo de Sa�da
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
