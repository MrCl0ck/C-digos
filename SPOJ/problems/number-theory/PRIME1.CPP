#include <iostream>
using namespace std;

int eh_primp(long long int x){
    if(x==1)
        return 0;
    for(long long int i=2; i*i<=x; ++i){
        if(x%i==0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    int n;
    long long int a, b;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;

        for (int j = a, z; j <= b; j++)
        {
            z=eh_primp(j);
            if (z==1)
            {
                cout<<j<<"\n";
            }            
        }
        
    }
    
    return 0;
}