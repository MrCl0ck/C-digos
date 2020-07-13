//https://www.urionlinejudge.com.br/judge/pt/problems/view/1276
#include <iostream>
#include <map>
using namespace std;

int main(){

    string frase;

    while(getline(cin, frase)){
        map<char, bool> letras;

        if(frase != ""){
            for(int i=0; i<frase.size(); ++i){
                if(letras[frase[i]] == 0 && frase[i] != ' '){
                    letras[frase[i]] = 1;
                }
            }

            for(map<char,bool>::iterator it = letras.begin(), j = it, k = it;it!=letras.end();it++){
                if(it->second == 1){
                    j=it;
                    k=it;
                    k++;
                    while(char(j->first + 1) == k->first){
                        k++;
                        j++;
                    }
                    k = j;
                    k++;
                    if(k != letras.end()){
                        cout<<it->first <<":" <<j->first <<", ";
                    }
                    else{
                        cout<<it->first <<":" <<j->first <<"\n";
                    }
                    it = j;
                }
            }
        }
        else{
            cout<<"\n";
        }

    }
	return 0;
}
