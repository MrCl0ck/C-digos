/*
URI Online Judge | 1429
Fatorial de Novo!
Por Ines Kereki  Uruguai
Timelimit: 3
Mateus, um calouro de engenharia, est� desenvolvendo uma nova nota��o posicional para representar n�meros inteiros. Ele o apelidou de "A Curious Method" ("Um M�todo Curioso"), representado pela sigla ACM. A nota��o ACM usa os mesmos d�gitos que a nota��o decimal, isto �, de 0 a 9.

Para converter um n�mero A da nota��o ACM para a nota��o decimal, voc� deve adicionar k termos, onde k � o n�mero de d�gitos de A (na nota��o ACM), O valor do i-�simo termo, correspondente ao i-�simo d�gito ai, contando da direita para a esquerda, � ai � i!. Por exemplo, 719ACM � equivalente a 5310, j� que 7 � 3! + 1 � 2! + 9 � 1! = 53.

Mateus acabou de iniciar seus estudos sobre teoria dos n�meros, e provavelmente n�o sabe quais propriedades um sistema num�rico deve ter, mas no momento, ele s� est� interessado em converter um n�mero de ACM para decimal. Voc� pode ajud�-lo?

Entrada
Cada caso de teste � dado por uma �nica linha n�o-nula contendo, no m�ximo, 5 d�gitos, representando um n�mero na nota��o ACM. A linha n�o possui zeros no in�cio.

O �ltimo caso de teste � representado por uma linha contendo um �nico zero.

Sa�da
Para cada caso de teste, escreva uma �nica linha contendo a representa��o decimal do n�mero ACM correspondente.


Exemplo de Entrada
719
1
15
110
102
0

Exemplo de Sa�da
53
1
7
8
8
*/

//tempo de execu��o 0.180
#include <iostream>
using namespace std;

long int fat[6];

int main(){
    string numero;
    long long int total;

    fat[0]=1;
    fat[1]=1;
    fat[2]=2;
    fat[3]=6;
    fat[4]=24;
    fat[5]=120;

    while(true){
        cin>>numero;

        if(numero[0] == '0')
            break;

        total = 0;

        for(int i=numero.size()-1, j=1; i>=0;--i, ++j){
            total += (numero[i]-'0')*fat[j];
        }

        cout<<total<<"\n";
    }

    return 0;
}

//tempo de execu��o 0.260

#include <iostream>
using namespace std;

long int fat[6];

void fatorial(){
    fat[0]=1;
    for(int i=1;i<6;++i){
        fat[i] = i*fat[i-1];
    }
}

int main(){
    string numero;
    long long int total;

    fatorial();
    while(true){
        cin>>numero;

        if(numero[0] == '0')
            break;

        total = 0;

        //cout<<numero[2] - '0' + 5<<endl; convers�o

        for(int i=numero.size()-1, j=1; i>=0;--i, ++j){
            total += (numero[i]-'0')*fat[j];
        }

        cout<<total<<"\n";
    }

    return 0;
}
