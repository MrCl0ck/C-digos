#include <iostream>

using namespace std;

int nvl(int n)
{
    if(n>=20){
        return 3;
    }
    if (n>=10)
    {
        return 2;
    }
    
    return 1;   
}

int main(){
    int n_ls, x;

    while (cin>>n_ls)
    {
        int nivel=0;
        for (int i = 0, maior=0; i < n_ls; i++)
        {
            cin>>x;

            if(maior<x){
                maior=x;
                nivel = nvl(x);
            }
        }

        cout<<nivel<<"\n";
    }
        
    return 0;
}