#include <iostream>
#include <string.h>
using namespace std;

void atualiza(int, int);
int vagoes, operacoes, pessoas, vagao;
int A, B, C, D;
int* partePTR;

int main()
{
	cin>>vagoes>>operacoes;
	
	int parte[vagoes];
	
	memset(parte, 0, sizeof(parte));
	partePTR = parte;
	
	for(int i = 0, op = 0; i < operacoes; i++){
		cin>>op;
		if(op == 1){
			cin>>vagao>>pessoas;
			
			atualiza(vagao-1, pessoas);
			
			for(int i = 0; i < vagoes; i++)
			{
				cout<<parte[i]<<" ";
			}			
			cout<<endl;
		}	
		else if(op == 2){
			cin>>A>>B>>C>>D;
			
			
		}	
	}
	
	
		
	

	return 0;
}

void atualiza(int x, int v){ // adicionar v frutas a caixa x
	
	while(x <= vagoes+1){ // nosso teto, que é quando vamos parar de rodar o algoritmo
		partePTR[x] += v; // adicionamos v frutas a arvore[x], como devemos
		x += (x & -x);  // atualizamos o valor de x adicionado ele ao seu bit menos significante
	}
}