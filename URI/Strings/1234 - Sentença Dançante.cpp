//https://www.urionlinejudge.com.br/judge/pt/problems/view/1234
/*
    Sentença Dançante
Por TopCoder*  EUA

Timelimit: 1
Uma sentença é chamada de dançante se sua primeira letra for maiúscula e cada letra subsequente for o oposto da letra anterior. Espaços devem ser ignorados ao determinar o case (minúsculo/maiúsculo) de uma letra. Por exemplo, "A b Cd" é uma sentença dançante porque a primeira letra ('A') é maiúscula, a próxima letra ('b') é minúscula, a próxima letra ('C') é maiúscula, e a próxima letra ('d') é minúscula.

Entrada
A entrada contém vários casos de teste. Cada caso de teste é composto por uma linha que contém uma sentença, que é uma string que contém entre 1 e 50 caracteres ('A'-'Z','a'-'z' ou espaço ' '), inclusive, ou no mínimo uma letra ('A'-'Z','a'-'z').

Saída
Transforme a sentença de entrada em uma sentença dançante (conforme o exemplo abaixo) trocando as letras para minúscula ou maiúscula onde for necessário. Todos os espaços da sentença original deverão ser preservados, ou seja, " sentence " deverá ser convertido para " SeNtEnCe ".

Exemplo de Entrada
This is a dancing sentence
  This   is         a  dancing   sentence
aaaaaaaaaaa
z

Exemplo de Saída
ThIs Is A dAnCiNg SeNtEnCe
  ThIs   Is         A  dAnCiNg   SeNtEnCe
AaAaAaAaAaA
Z
*/
#include <iostream>

using namespace std;

int main(){
    string f;
    bool flag = 0;

    while(getline(cin, f)){
        flag = 0;
        for(int i=0; i<f.size(); ++i){
            if(flag == 0){
                if(tolower(f[i]) == f[i]){
                    f[i] = toupper(f[i]);
                }

                if(f[i] != ' '){
                    flag = 1;
                }
            }
            else if(flag == 1){
                if(toupper(f[i]) == f[i]){
                    f[i] = tolower(f[i]);
                }
                if(f[i] != ' '){
                    flag = 0;
                }
            }
        }
        cout<<f<<"\n";
    }

	return 0;
}
