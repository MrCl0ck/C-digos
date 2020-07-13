/*
URI Online Judge | 2137
A Biblioteca do Senhor Severino
Por Joao Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil

Timelimit: 1
Em uma pacata cidade do interior, o senhor Severino decidiu montar a própria biblioteca, já que coleciona vários livros desde sua juventude. Como ele não sabe programar, pediu ajuda ao neto para criar um programa que cadastre e ordene seus livros pelo código. Porém, seu neto ainda está no ensino fundamental, e como sabe muito pouco de programação, acabou criando um programa que somente cadastra os livros, mas não os ordena.

Desse modo, o senhor Severino recorreu a você, pois sabe de suas habilidades com programação. Sua tarefa é simples: ordenar os cadastros dos códigos dos livros.

Entrada
A entrada contém vários casos de teste. Cada teste começa com um valor N (1 ≤ N ≤ 1000). Em seguida, N linhas terão os códigos dos livros, que estão sempre no formato "xxxx", isto é, não haverá o cadastro '1', por exemplo, mas "0001". A entrada termina com fim de arquivo.

Saída
Seu programa deverá imprimir o cadastro dos códigos ordenado. Não haverá linha em branco entre os casos de teste.

Exemplo de Entrada
3

1233

0015

0100

7

0752

1110

0001

6322

8000

6321

0000


Exemplo de Saída

0015

0100

1233

0000

0001

0752

1110

6321

6322

8000

Aquecimento para a VI Olimpíada Interna de Programação do IFSULDEMINAS - OLIP 2016



*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int casos;

    while(cin>>casos){
        vector<string> livros(casos), ordem(casos);

        for(int i=0;i<casos;++i){
            cin>>livros[i];
        }

        sort(livros.begin(), livros.end());

        for(int i=0;i<casos;++i){
            cout<<livros[i]<<"\n";
        }
    }

    return 0;
}