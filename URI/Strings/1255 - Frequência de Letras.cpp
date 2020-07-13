//https://www.urionlinejudge.com.br/judge/pt/problems/view/1255
#include <iostream>
#include <map>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
    int N;
    string f;

    cin>>N;
    cin.ignore();

    for(int i=0; i<N; ++i){
        getline(cin, f);

        int maior = 0;
        map<char, int> mapa;

        for(int j=0; j<f.size(); ++j){
            if(isalpha(f[j]) != 0){
                mapa[tolower(f[j])]++;

                if(maior < mapa[tolower(f[j])]){
                    maior = mapa[tolower(f[j])];
                }
            }
        }

        for(map<char,int>::iterator it = mapa.begin(); it!= mapa.end(); it++){
           if(it->second == maior){
                cout<<it->first;
           }
        }
        cout<<"\n";
    }

	return 0;
}
