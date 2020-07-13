#include <iostream>
using namespace std;

int main(){
    string numero1, numero2;
    int casos;

    cin>>casos;


    for(int i=0;i<casos;++i){
        cin>>numero1>>numero2;

        if(numero2.size() > numero1.size()){
            cout<<"nao encaixa"<<"\n";
        }
        else{
            int contador = 0;
            for(int j=0, k = numero1.size() - numero2.size(); j<numero2.size(); ++j){
                if(numero1[k] == numero2[j]){
                    k++;
                }
                else{
                    contador++;
                    break;
                }
            }
            if(contador == 0){
                cout<<"encaixa"<<"\n";
            }
            else{
                cout<<"nao encaixa"<<"\n";
            }
        }

    }

    return 0;
}
