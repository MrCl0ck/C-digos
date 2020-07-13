//ACCEPTED - Pode se fazer as operações e ao mesmo tempo já exibir o resultado dentro de uma mesma estrutura de repetição
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int casos_de_teste;
	
	cin>>casos_de_teste;
	cin.ignore();
	
	string numeros[casos_de_teste];
	int resultados[casos_de_teste];
	
	memset(resultados, (int)0, sizeof(int)*casos_de_teste);
	
	for(int i = 0; i < casos_de_teste; i++){
		getline(cin, numeros[i]);
		
		for(int j = 0; j < (int)numeros[i].length(); j++){
			if(numeros[i][j] == '2' || numeros[i][j] == '3' || numeros[i][j] == '5'){
				resultados[i] += 5;
			}
			else if(numeros[i][j] == '6' || numeros[i][j] == '9' || numeros[i][j] == '0'){
				resultados[i] += 6;
			}
			else if(numeros[i][j] == '1'){
				resultados[i] += 2;
			}
			else if(numeros[i][j] == '4'){
				resultados[i] += 4;
			}
			else if(numeros[i][j] == '7'){
				resultados[i] += 3;
			}
			else if(numeros[i][j] == '8'){
				resultados[i] += 7;
			}			
		}
		cout<<resultados[i]<<" leds"<<endl;	
	}
	
	return 0;	
	
}