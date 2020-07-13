/*
	A sua impressora foi infectada por um vírus e está imprimindo de forma incorreta. Depois de olhar para várias páginas impressas por um tempo, 
	você percebe que ele está imprimindo cada linha de dentro para fora. Em outras palavras, a metade esquerda de cada linha está sendo impressa 
	a partir do meio da página até a margem esquerda. Do mesmo modo, a metade direita de cada linha está sendo impressa à partir da margem direita
	e prosseguindo em direção ao centro da página.

Por exemplo a linha:
THIS LINE IS GIBBERISH

está sendo impressa como:
I ENIL SIHTHSIREBBIG S

Da mesma foma, a linha " MANGOS " está sendo impressa incorretamente como "NAM  SOG". Sua tarefa é desembaralhar (decifrar) a string a partir da forma
como ela foi impressa para a sua forma original. Você pode assumir que cada linha conterá um número par de caracteres.

Entrada
A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Seguem N linhas, 
cada uma com uma frase com no mínimo 2 e no máximo 100 caracteres de letras maiúsculas e espaços que deverá ser desembaralhada (decifrada) à partir
da forma impressa para a sua forma original, conforme especificação acima.

Saída
Para cada linha de entrada deverá ser impressa uma linha de saída com a frase decifrada, conforme a especificação acima.

-dividir o tamanho total da string por 2, pegar seu inicio até o meio e inverter, pegar do meio até o fim e inverter também.
*/
#include <iostream>
#include <string>
using namespace std;

int n_testes, tam_frase, aux_final;
string frase_original, frase_nova;

int main()
{
	cin>>n_testes;	
	
	for(int i = 0; i < 1; i++){
		cin.ignore();
		getline(cin,frase_original);
		frase_nova = frase_original;
		tam_frase = (int)frase_original.length();
		aux_final = tam_frase;		
		cout<<tam_frase<<endl;
		
		for(int j = 0,  metade_menor = (tam_frase/2)-1, metade_maior = tam_frase/2; j <= tam_frase; j++){
			if(j < tam_frase/2 and metade_menor >= 0){
				frase_nova[j] = frase_original[metade_menor];
				metade_menor--;
			}
			else if(j >= tam_frase/2 and metade_maior <= tam_frase){
				frase_nova[j] = frase_original[aux_final];
				metade_maior++;
				aux_final--;
			}
			//0 1 2 3 4 5 6 7 8 9  10 11 12 13 14 15 16 17 18 19 20 21 
			//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22
		}
		cout<<frase_nova<<endl;
	}
	
	return 0;
}