#include <stdio.h>
#include <stdlib.h>

int main (){
    float valor;
    int notas;

    scanf("%f", &valor);
     printf("NOTAS:\n");
    notas = (valor / 100);
    valor = valor - (notas * 100);
    printf("%d nota(s) de R$ 100.00\n", notas);
    notas = (valor / 50);
    valor = valor - (notas * 50);
    printf("%d nota(s) de R$ 50.00\n", notas);
     notas = (valor / 20);
     valor = valor - (notas * 20);
    printf("%d nota(s) de R$ 20.00\n", notas);
    notas = (valor / 10);
   valor = valor - (notas * 10);
    printf("%d nota(s) de R$ 10.00\n", notas);
    notas = (valor / 5);
    valor = valor - (notas * 5);
    printf("%d nota(s) de R$ 5.00\n", notas);
    notas = (valor / 2);
    valor = valor - (notas * 2);
   printf("%d nota(s) de R$ 2.00\n", notas);
    printf("MOEDAS:\n");
     valor = (valor * 100);
    notas = (valor / 100);
    valor = valor - (notas * 100);
    printf("%d moeda(s) de R$ 1.00\n", notas);
     notas = (valor / 50);
     valor = valor - (notas * 50);
     printf("%d moeda(s) de R$ 0.50\n", notas);
     notas = (valor / 25);
     valor = valor - (notas * 25);
    printf("%d moeda(s) de R$ 0.25\n", notas);
    notas = (valor / 10);
     valor = valor - (notas * 10);
    printf("%d moeda(s) de R$ 0.10\n", notas);
    notas = (valor / 5);
     valor = valor - (notas * 5);
     printf("%d moeda(s) de R$ 0.05\n", notas);
    notas = (valor / 1);
    valor = valor - (notas * 1);
        printf("%d moeda(s) de R$ 0.01\n", notas);

    return ;
}
