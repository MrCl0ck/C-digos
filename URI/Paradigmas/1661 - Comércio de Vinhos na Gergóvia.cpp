#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int testes;

    while(cin>>testes && testes!=0){
        long long int total = 0, dist = 0;
        int vetor[100000] = {0};
        for(int i=0; i<testes; ++i){
            cin>>vetor[i];
        }

        for(int i=0; i<testes; ++i){
            if(vetor[i] > 0){
                for(int j=i+1; j<testes; ++j){
                    if(vetor[j] < 0){
                        if(abs(vetor[j]) > vetor[i]){
                            vetor[j] += vetor[i];
                            total += vetor[i]*j;
                        }
                        else{
                            vetor[j] -= vetor[j];
                            total += abs(vetor[j])*j;
                        }
                        cout<<"total: " <<total <<"\n";
                    }
                }
            }
            else if(vetor[i] < 0){
                for(int j=i+1; j<testes; ++j){

                }
            }

        }
    }


    return 0;
}
