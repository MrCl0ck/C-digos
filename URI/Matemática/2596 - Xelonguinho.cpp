#include <iostream>
#include <cmath>
using namespace std;

int esferas, testes;
int c = 2;
int quantidade_divisores(int);


int main()
{
	cin>>testes;
	
	for(int i = 0; i < testes; i++){
		cin>>esferas;
		int soma = 0;
		
		if(esferas == 1){
		   	cout<<1 <<endl;	
	   	}
	   	else{
		   	for(int j = 1, resultado; j <= esferas; j++){
			
	  			resultado = quantidade_divisores(j);	
		   	   	c = 2;   
		
			   	if(resultado%2==0){
					soma +=	1;
				}		   	 			   	
			}
		
			cout<<soma<<endl;	   
		}
			
	}
	
	return 0;
}

int quantidade_divisores(int numero){	
	if(numero == 1){
		return 1;	
	}
	for(int i=2; i<((int)floor(sqrt(numero)))+1; i++)
	{
	   if(numero % i == 0){
	   	
	      c += (numero/i == i) ? 1 : 2;
	   }
	}
	
	return c;
}