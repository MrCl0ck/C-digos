#include <iostream>
using namespace std;

int digito;
string numero_negociado, novo_numero_negociado;

int main()
{
	do{
		cin>>digito;
	   	cin.ignore();
	   	getline(cin, numero_negociado);
	   	
	   	if(digito != 0 && numero_negociado != "0"){
	   		novo_numero_negociado = numero_negociado;	   	
		   	for(int i = 0, j = 0; i < (int)numero_negociado.length(); i++)  {
			   if(numero_negociado.find(digito)){
					novo_numero_negociado.erase(novo_numero_negociado.begin() + i);
					cout<<novo_numero_negociado<<endl;				  	   
				}
				else{
					novo_numero_negociado[j] = numero_negociado[i];
					j++;		
				}	
		    }
			cout<<novo_numero_negociado<<endl;			   
		}
	   	
	   	
	}while(digito != 0 && numero_negociado != "0");
	
		
		
	//cout<<digito <<" " <<numero_negociado <<endl;	
	return 0;
}