#include <iostream>
using namespace std;

//0.028 tempo de execução

long long int guarda[1000000];

void atualiza(){
    int base = 1;
    guarda[0] = 1;
    for(int i=1; i<1000000 ;++i,++base){
        guarda[i] = guarda[i-1] + base;
    }
}

int main(){
    int retas, casos;

    cin>>casos;

    atualiza();

    for(int i=0; i<casos; ++i){
        cin>>retas;
        cout<<guarda[retas]<<"\n";
    }

    return 0;
}

//0.100 tempo de execução

//int main(){
    //long long int total = 1;
    //int retas, casos;
//
    //cin>>casos;

    //for(int i=0; i<casos; ++i){
        //cin>>retas;
        //for(int j=retas; j>0; --j){
        //    total += j;
        //}
        //cout<<total<<"\n";
        //total = 1;
    //}

    //return 0;
//}
