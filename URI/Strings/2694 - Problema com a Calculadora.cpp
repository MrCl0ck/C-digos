/*
   Problema com a Calculadora
Por Neilor Tonin, URI BR Brazil

Timelimit: 1
Joãozinho tem que ajudar seu pai. Um relatório específico com alguns números está saindo com caracteres indesejáveis no meio. A ideia é apenas somar os 3 valores que aparecem em cada linha sempre na mesma posição, ignorando as letras e apresentar esta soma. Não existem espaços em branco na linha.

Entrada
A primeira linha de entrada contém um inteiro N (N < 100000). Seguem N linhas com exatos 14 caracteres que devem ser lidas e delas extraídos e somados os três números existentes.

Saída
Para cada linha de entrada, seu programa deve apresentar um valor numérico inteiro, que é a soma dos 3 números existentes na linha.

Exemplo de Entrada
3
Ab23s249ttu21
At01v021kkk12
xx14l134mjm01

Exemplo de Saída
293
34
149
*/

#include <iostream>
using namespace std;


int main(){
    int casos;
    string frase;

    cin>>casos;

    for(int i=0;i<casos;++i){
        cin>>frase;

        total = (frase[2] - '0')*10 + (frase[3] - '0')*1 + (frase[5] - '0')*100 + (frase[6] - '0')*10 + (frase[7] - '0')*1 +
                + (frase[11] - '0')*10 + (frase[12] - '0')*1;
        cout<<total<<"\n";
    }

    return 0;
}
