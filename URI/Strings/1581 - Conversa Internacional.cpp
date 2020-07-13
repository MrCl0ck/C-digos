//text
#include <iostream>

using namespace std;

int main(){
    int casos, pessoas;
    string idioma;

    cin>>casos;

    for(int i=0; i<casos ; ++i){
        cin>>pessoas;

        string comp[pessoas];

        for(int j=1, k=0; k < pessoas ; ++j, ++k){
            cin>>comp[k];
        }

        for(int k=0; k < pessoas ; ++k){
            if(k+1 < pessoas){
                if(comp[k] == comp[k+1]){
                    idioma = comp[k];
                }
                else{
                    idioma = "ingles";
                    break;
                }
            }
        }

        cout<<idioma<<"\n";
    }

	return 0;
}
