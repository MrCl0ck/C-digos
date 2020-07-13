#include <iostream>
using namespace std;

int main(){
    int casos;
    long long int cobertura, pista_tam;

    cin>>casos;

    for(int i=0; i<casos ; ++i){
        cin>>pista_tam>>cobertura;

        if(pista_tam%cobertura == 0){
            cout<<pista_tam/cobertura<<"\n";
        }
        else{
            cout<<pista_tam/cobertura + 1<<"\n";
        }
    }

    return 0;
}
