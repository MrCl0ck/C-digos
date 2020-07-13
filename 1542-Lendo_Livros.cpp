#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Q, D, P;

    while(cin>>Q && Q && cin>>D>>P){
        long long int T = 0;

        T = (Q*D*P)/(P-Q);
        
        if(T == 1){
            cout<<T<<" pagina\n";
        }
        else
        {
            cout<<T<<" paginas\n";
        }
    }   

    return 0;
}