#include <iostream>
using namespace std;

int main(){
    int Q, D, P;

    while(cin>>Q && Q && cin>>D>>P){
        long long int x=min(Q, P), y=max(Q, P);
        int i = 0;
        while (x!=y)
        {
            if(i>=D){
                y+=P;
            }
            i++;
            x+=Q;
        }

        cout<<x<<" paginas\n";
        
    }   

    return 0;
}