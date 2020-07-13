/*
URI Online Judge | 1429
Fatorial de Novo!
Por Ines Kereki  Uruguai
Timelimit: 3
Mateus, um calouro de engenharia, está desenvolvendo uma nova notação posicional para representar números inteiros. Ele o apelidou de "A Curious Method" ("Um Método Curioso"), representado pela sigla ACM. A notação ACM usa os mesmos dígitos que a notação decimal, isto é, de 0 a 9.

Para converter um número A da notação ACM para a notação decimal, você deve adicionar k termos, onde k é o número de dígitos de A (na notação ACM), O valor do i-ésimo termo, correspondente ao i-ésimo dígito ai, contando da direita para a esquerda, é ai × i!. Por exemplo, 719ACM é equivalente a 5310, já que 7 × 3! + 1 × 2! + 9 × 1! = 53.

Mateus acabou de iniciar seus estudos sobre teoria dos números, e provavelmente não sabe quais propriedades um sistema numérico deve ter, mas no momento, ele só está interessado em converter um número de ACM para decimal. Você pode ajudá-lo?

Entrada
Cada caso de teste é dado por uma única linha não-nula contendo, no máximo, 5 dígitos, representando um número na notação ACM. A linha não possui zeros no início.

O último caso de teste é representado por uma linha contendo um único zero.

Saída
Para cada caso de teste, escreva uma única linha contendo a representação decimal do número ACM correspondente.


Exemplo de Entrada
719
1
15
110
102
0

Exemplo de Saída
53
1
7
8
8
*/

//tempo de execução 0.180
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

//tempo de execução 0.260

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

        //cout<<numero[2] - '0' + 5<<endl; conversão

        for(int i=numero.size()-1, j=1; i>=0;--i, ++j){
            total += (numero[i]-'0')*fat[j];
        }

        cout<<total<<"\n";
    }

    return 0;
}
