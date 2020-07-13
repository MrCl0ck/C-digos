//https://www.urionlinejudge.com.br/judge/pt/problems/view/2150
/*
    Vogais Alienígenas
Por Ricardo Martins, IFSULDEMINAS BR Brazil

Timelimit: 1
Desde o Gerador de Improbabilidade Infinita, muitos nem questionam sobre a vida em outros planetas, e se aprofundam em questionamentos mais improváveis, como, por exemplo, será que seres de outros planetas usam os mesmos caracteres que a gente para escrever? E se isto for verdade, será que usam as mesmas vogais que a gente? Pensando nisto, muitos cientistas projetaram vários tipos de alfabetos alienígenas, usando as letras do nosso alfabeto, além dos dígitos, de 0 a 9, com as suas respectivas vogais. Baseados nisto, estes pedem a sua ajuda para identificar vogais em alfabetos alienígenas e fazer contagens a respeito.

Escreva um programa que, dado uma sequência de vogais, em um determinado alfabeto alienígena, contabilize, em um texto escrito com o mesmo alfabeto, quantas vogais o mesmo possui.

Entrada
Haverá diversos casos de teste. Cada caso de teste é formado por duas linhas. A primeira linha informa uma palavra, formada por todas as vogais alienígenas de um determinado planeta. A segunda linha contém uma frase formada por letras do mesmo alfabeto. A entrada termina com fim de arquivo.

Saída
Para cada caso de teste, imprima a quantidade de vogais alienígenas correspondente.

Exemplo de Entrada
aeiou
o rato roeu a roupa do rei de roma

4310
t3st3 p4r4 c0d1f1c4r

kwy
the quick brown fox jumps over the lazy dog



Exemplo de Saída

16

8

3
*/

#include <iostream>
#include <map>
using namespace std;

int main(){
    string vogais, f;

    while(getline(cin, vogais) && getline(cin,f)){
        map<char, int>  mapa;
        int cont = 0;

        for(int i=0; i<f.size(); ++i){
            mapa[f[i]]++;
        }

        for(int i=0; i<vogais.size(); ++i){
            cont += mapa[vogais[i]];
        }

        cout<<cont<<"\n";
    }

	return 0;
}
