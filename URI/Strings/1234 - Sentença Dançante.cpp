//https://www.urionlinejudge.com.br/judge/pt/problems/view/1234
/*
    Senten�a Dan�ante
Por TopCoder*  EUA

Timelimit: 1
Uma senten�a � chamada de dan�ante se sua primeira letra for mai�scula e cada letra subsequente for o oposto da letra anterior. Espa�os devem ser ignorados ao determinar o case (min�sculo/mai�sculo) de uma letra. Por exemplo, "A b Cd" � uma senten�a dan�ante porque a primeira letra ('A') � mai�scula, a pr�xima letra ('b') � min�scula, a pr�xima letra ('C') � mai�scula, e a pr�xima letra ('d') � min�scula.

Entrada
A entrada cont�m v�rios casos de teste. Cada caso de teste � composto por uma linha que cont�m uma senten�a, que � uma string que cont�m entre 1 e 50 caracteres ('A'-'Z','a'-'z' ou espa�o ' '), inclusive, ou no m�nimo uma letra ('A'-'Z','a'-'z').

Sa�da
Transforme a senten�a de entrada em uma senten�a dan�ante (conforme o exemplo abaixo) trocando as letras para min�scula ou mai�scula onde for necess�rio. Todos os espa�os da senten�a original dever�o ser preservados, ou seja, " sentence " dever� ser convertido para " SeNtEnCe ".

Exemplo de Entrada
This is a dancing sentence
  This   is         a  dancing   sentence
aaaaaaaaaaa
z

Exemplo de Sa�da
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
