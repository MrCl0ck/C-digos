#include <iostream>
#include <cctype>

using namespace std;

int main(){
    long long int casos;
    string senha;

    cin>>casos;

    for(int i=0;i<casos;++i){
        cin>>senha;

        char aux = ' ';
        long long int total = 1;
        for(int j=0; j<senha.size(); ++j){
            aux = toupper(senha[j]);
            switch(aux){
                case 'A':{
                    total *= 3;
                    break;
                }
                case 'E':{
                    total *= 3;
                    break;
                }
                case 'I':{
                    total *= 3;
                    break;
                }
                case 'O':{
                    total *= 3;
                    break;
                }
                case 'S':{
                    total *= 3;
                    break;
                }
                default:{
                    total *= 2;
                }
            }
        }
        cout<<total<<"\n";
    }

    return 0;
}
