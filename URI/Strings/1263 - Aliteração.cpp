#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string frase;

    while(getline(cin, frase)){

        int cont = 0, geral = 0;
        for(int i=0, p1 = 0, p2 = 0; i<frase.size(); ++i){
            if(frase[i] == ' '){
                p2 = i+1;
                //cout<<char(toupper(frase[p1])) <<" " <<char(toupper(frase[p2]))<<"\n";
                if(toupper(frase[p1]) == toupper(frase[p2]) && cont == 0){
                    geral++;
                    cont = 1;
                }
                else if(toupper(frase[p1]) != toupper(frase[p2])){
                    cont = 0;
                }

                p1 = i+1;
            }
        }
        cout<<geral<<"\n";
    }

    return 0;
}
