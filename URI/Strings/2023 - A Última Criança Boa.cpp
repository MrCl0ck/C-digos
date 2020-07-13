//https://www.urionlinejudge.com.br/judge/pt/problems/view/2023
/*
    A �ltima Crian�a Boa
Por M.C. Pinto, UNILA BR Brazil

Timelimit: 1
Papai Noel classifica todas as crian�as do mundo em duas listas: uma das boazinhas e outra das malcriadas. Ele gostaria de saber qual das crian�as do mundo � a �ltima da lista de boazinhas, se usar a ordem alfab�tica. Para isso, ele pediu a todos seus elfos ajudantes que escrevessem os nomes das crian�as boas em uma folha.

Entretanto, cada elfo escreveu os nomes de um jeito: mai�scula no in�cio e min�sculas depois, todas mai�sculas, todas min�sculas, e todo tipo de combina��o entre mai�sculas e min�sculas.

Papai Noel quer sua ajuda para, dada a lista de nome das crian�as boas, dizer qual delas � a �ltima.

Entrada
A entrada possui v�rias linhas. Em cada linha h� o nome de uma crian�a boa. Nenhum elfo escreveu os nomes com acentos. O maior nome tem no m�ximo 80 caracteres. N�o existem mais de 1000 crian�as na lista. Todos os nomes s�o distintos. A lista de nomes termina com EOF.

Sa�da
A sa�da � dada em uma linha. O nome da crian�a que fica na �ltima posi��o da lista deve ser mostrado. Mostre o nome exatamente como foi lido na entrada. Use a ordem alfab�tica dos nomes para ordenar, mas considere mai�sculas e min�sculas como iguais.

Exemplos de Entrada	                                                                    Exemplos de Sa�da
ana                                                                                      VANESSA
Julio
gABRIEL
VANESSA
cArLoS

abraao                                                                                   aRi
aRi
abelardo
amanda

Joaquim Jose da Silva Xavier                                                             Pedro Raymundo
Pedro de Alcantara Joao Carlos Leopoldo Salvador Bibiano Francisco Xavier Miguel
Pedro de Alcantara Francisco Antonio Joao Carlos Xavier de Paula Miguel Cipriano
Pedro Raymundo
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;


string tranf(string g){
    for(int i=0; i<g.size(); ++i){
        g[i] = tolower(g[i]);
    }

    return g;
}

int main(){
    string g;
    vector<string> vetor, ordenado;

    while(getline(cin, g)){
        vetor.push_back(g);
        ordenado.push_back(tranf(g));
    }

    sort(ordenado.begin(), ordenado.end());

    for(int i=0; i<vetor.size(); ++i){
        if(ordenado[ordenado.size()-1] == tranf(vetor[i])){
            cout<<vetor[i]<<"\n";
            break;
        }
    }

	return 0;
}
