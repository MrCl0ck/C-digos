//https://www.urionlinejudge.com.br/judge/pt/problems/view/2174
#include <iostream>
#include <map>
using namespace std;

int main(){

    int casos, cont = 151;
    map<string, bool> pokemon;
    string frase;

    cin>>casos;

    for(int i=0; i<casos ; i++){
        cin>>frase;

        if(pokemon[frase] == 0){
            pokemon[frase] = 1;
            cont--;
        }
    }

    cout<<"Falta(m) " <<cont<<" pomekon(s)."<<"\n";

	return 0;
}
