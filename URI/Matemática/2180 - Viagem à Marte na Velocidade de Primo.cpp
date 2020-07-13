#include <iostream>
using namespace std;

bool composto[70010];

void crivo(long long int n){
    composto[1] = 1;
    for(long long int i = 2; i <= n; ++i){
        if(composto[i] == 0){
            for(long long int j = 2; j*i <= n; ++j){
                composto[j*i] = 1;
            }
        }
    }
    return;
}
int main(){
    int peso;
    long int total = 0, dias = 0, horas = 0;

    cin>>peso;

    crivo(70000);

    for(int i=peso, cont=1;cont<=10;++i){
        if(composto[i] == 0){
            cont++;
            total += i;
        }
    }

    horas=60000000/total;
    dias=horas/24;

    cout<<total <<" km/h" <<"\n";
    cout<<horas <<" h / " <<dias<<" d" <<"\n";

    return 0;
}
