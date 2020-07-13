#include <iostream>
using namespace std;

int main(){
    int N, R;

    while(cin>>N>>R){
        int v[10001] = {0};

        for (int i = 0, x; i < R; i++)
        {
            cin>>x;
            v[x] = x;
        }

        int cont = 0;

        for (int i = 1; i <= N; i++)
        {
            if(i==v[i]){
                cont++;
            }
        }

        if(cont<N){
            for (int i = 1; i <= N; i++)
            {
                if(i!=v[i]){
                    cout<<i<<" ";
                }
            }
            cout<<"\n";
        }
        else{
            cout<<"*"<<"\n";
        }                
    }

    return 0;
}