/*
   Criptotexto
Por Ricardo Martins, IFSULDEMINAS BR Brazil

Timelimit: 1
César é um detetive que investiga uma série de roubos que acontecem em sua cidade. Em todo lugar que um crime acontece, a pessoa que cometeu tal crime deixa uma mensagem escrita, formada por letras maiúsculas e minúsculas. César conseguiu achar um padrão nestas mensagens e agora extrai um texto oculto em cada mensagem e pede a sua ajuda para tentar descobrir quem está cometendo tais crimes.

Entrada
A entrada é composta por vários casos de teste. A primeira linha contém um número inteiro C (2 <= C <= 99) relativo ao número de casos de teste. Nas C linhas seguintes, haverá mensagens codificadas, todas com um mesmo padrão em relação ao exemplo abaixo.

Saída
Para cada caso de teste de entrada do seu programa, você deve imprimir o texto extraído da mensagem original.

Exemplo de Entrada
3
NoTApasCAL
atEQUEatabELATERMINE
zoEIrrRRRRa

Exemplo de Saída
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
