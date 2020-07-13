/*
   Criptotexto
Por Ricardo Martins, IFSULDEMINAS BR Brazil

Timelimit: 1
C�sar � um detetive que investiga uma s�rie de roubos que acontecem em sua cidade. Em todo lugar que um crime acontece, a pessoa que cometeu tal crime deixa uma mensagem escrita, formada por letras mai�sculas e min�sculas. C�sar conseguiu achar um padr�o nestas mensagens e agora extrai um texto oculto em cada mensagem e pede a sua ajuda para tentar descobrir quem est� cometendo tais crimes.

Entrada
A entrada � composta por v�rios casos de teste. A primeira linha cont�m um n�mero inteiro C (2 <= C <= 99) relativo ao n�mero de casos de teste. Nas C linhas seguintes, haver� mensagens codificadas, todas com um mesmo padr�o em rela��o ao exemplo abaixo.

Sa�da
Para cada caso de teste de entrada do seu programa, voc� deve imprimir o texto extra�do da mensagem original.

Exemplo de Entrada
3
NoTApasCAL
atEQUEatabELATERMINE
zoEIrrRRRRa

Exemplo de Sa�da
sapo
batata
arroz
*/

#include <iostream>
#include <cctype>
using namespace std;


int main(){
    int casos;
    string frase;

    cin>>casos;

    for(int i=0;i<casos;++i){
        cin>>frase;

        string resultado = "";

        for(int i=frase.size()-1;i>-1;i--){
            if(isupper(frase[i]) == 0){
                resultado += frase[i];
            }
        }

        cout<<resultado<<"\n";
    }

    return 0;
}
