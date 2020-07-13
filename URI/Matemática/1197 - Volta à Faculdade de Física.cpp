/*
URI Online Judge | 1197
Volta à Faculdade de Física
Por Shahriar Manzoor  Bangladesh

Timelimit: 1
Uma partícula tem velocidade inicial e aceleração constante. Se a sua velocidade após certo momento é v então qual será seu deslocamento no dobro deste tempo?

Entrada
A entrada contém vários casos de teste. Cada linha da entrada é um caso de teste e contém dois inteiros v (-100 ≤ v ≤ 100) e t (0 ≤ t ≤ 200) ( t significa o momento no qual a partícula ganha aquela velocidade). O final da entrada é determinado por EOF.

Saída
Para cada linha de entrada imprima um único inteiro que denota o deslocamento no dobro do tempo fornecido.

Exemplo de Entrada
0 0
5 12

Exemplo de Saída
0
120


*/


#include<iostream>
using namespace std;

int main(){
    int velocidade, tempo;
    float aceleracao = 0;

    while(cin>>velocidade>>tempo){
        aceleracao = (float)velocidade/(float)tempo;
        //cout<<aceleracao<<" -< acelaracao\n";

        tempo = 2*tempo;
        if(tempo == 0){
            cout<<0<<"\n";
        }
        else{
            cout<<(aceleracao*(tempo*tempo))/2<<"\n";//s = so + vo*t + (a * t^2)/2;
        }
    }

    return 0;
}
