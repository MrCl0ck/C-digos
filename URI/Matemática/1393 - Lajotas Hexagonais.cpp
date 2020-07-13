#include <iostream>
using namespace std;

long long int guarda[41];

void fibonacci(){//faz se o pre calculo de fibonacci, quando for chamada a função só faz exibir onde está o resultado
    int base = 1;
    guarda[0] = 0;
    guarda[1] = 1;
    for(int i=2; i<=41 ;++i,++base){
        guarda[i] = guarda[i-1] + guarda[i-2];//fibonacci
    }
}

int main(){
    int valor;

    fibonacci();

    while(true){
        cin>>valor;

        if(valor == 0){
            break;
        }

        cout<<guarda[valor+1]<<"\n";
    }

    return 0;
}
