//https://www.urionlinejudge.com.br/judge/pt/problems/view/2140
#include <iostream>

using namespace std;

int main(){
    int valor, pago;
    int vetor[6] = {2, 5, 10, 20, 50, 100};

    while(cin>>valor>>pago && (valor!=0 && pago!=0)){
        valor=pago-valor;
        int j=0;
        for(int i=5; i>=0 ; --i){
            if(vetor[i]<=valor){
                valor-=vetor[i];
                j++;
            }
        }
        if(valor==0 && j == 2){
           cout<<"possible"<<"\n";
        }
        else{
            cout<<"impossible"<<"\n";
        }

    }

    return 0;

}
