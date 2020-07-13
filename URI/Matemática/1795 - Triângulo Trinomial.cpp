#include <iostream>
#include <cmath>
using namespace std;

long long int trinomial[21];

void triangulo_trinomial(){
    int expoente = 0;

    for(int i=0;i<21;++i,++expoente){
        trinomial[i] = pow(3,expoente);
        //cout<<trinomial[i]<<"\n";
    }
}

int main(){
    triangulo_trinomial();

    int linha;

    cin>>linha;

    cout<<trinomial[linha]<<"\n";

    return 0;
}
