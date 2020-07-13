//https://www.urionlinejudge.com.br/judge/pt/problems/view/1222
#include <iostream>
using namespace std;

int main(){
    int N, L, C;
    string s;

    while(cin>>N>>L>>C){
        cin.ignore();

        int caracteres = 0, linha = 0, paginas = 0;


        for(int i=0;i<N;++i){
            cin>>s;

            caracteres += s.size();
        }

        caracteres+=N;//acrescenta-se o número de espaços.
        linha = caracteres/C; //linhas inteiras em uma página
        caracteres -= linha;
        if(float(caracteres%C)>0){
            linha++;
        }

        paginas = linha/L;

        if(float(linha%L)>0){
            paginas++;
        }

        cout<<paginas<<"\n";
    }
	return 0;
}
