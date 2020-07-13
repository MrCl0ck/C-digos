//text
#include <iostream>
#include <map>
#include <cctype>
using namespace std;

int main(){
    int N;
    string f;

    cin>>N;
    cin.ignore();

    for(int i=0; i<N; ++i){
        getline(cin, f);

        int letras = 0;
        map<char, bool> mapa;

        for(int j=0; j<(int)f.size();++j){
            if(mapa[f[j]] == 0 && isalpha(f[j]) != 0){
                mapa[f[j]] = 1;
                letras++;
            }
        }

        //cout<<letras<<"\n";

        if(letras == 26){
            cout<<"frase completa" <<"\n";
        }
        else if(letras >= 13 && letras < 26){
            cout<<"frase quase completa" <<"\n";
        }
        else{
            cout<<"frase mal elaborada" <<"\n";
        }
    }

	return 0;
}
