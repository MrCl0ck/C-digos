#include <iostream>
using namespace std;

int main(){
    int tamanho;
    long long int total = 0;

    while(cin>>tamanho != 0){
        if(tamanho != 0){
            for(int i=1; i<=tamanho ;++i){
                total += i*i ;
            }
            cout<<total<<"\n";
            total = 0;
        }
        else{
            break;
        }
    }

    return 0;
}
