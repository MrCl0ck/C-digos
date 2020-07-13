/*
   Problema com a Calculadora
Por Neilor Tonin, URI BR Brazil

Timelimit: 1
Jo�ozinho tem que ajudar seu pai. Um relat�rio espec�fico com alguns n�meros est� saindo com caracteres indesej�veis no meio. A ideia � apenas somar os 3 valores que aparecem em cada linha sempre na mesma posi��o, ignorando as letras e apresentar esta soma. N�o existem espa�os em branco na linha.

Entrada
A primeira linha de entrada cont�m um inteiro N (N < 100000). Seguem N linhas com exatos 14 caracteres que devem ser lidas e delas extra�dos e somados os tr�s n�meros existentes.

Sa�da
Para cada linha de entrada, seu programa deve apresentar um valor num�rico inteiro, que � a soma dos 3 n�meros existentes na linha.

Exemplo de Entrada
3
Ab23s249ttu21
At01v021kkk12
xx14l134mjm01

Exemplo de Sa�da
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
