#include <iostream>

using namespace std;

int main(){
    int n, t=1, flag=0;

    
    while (cin>>n && n)
    {
        for (int i = 1, x; i <= n; i++)
        {
            cin>>x;

            if(x==i){
                flag=x;
            }
        }    
        cout<<"Teste "<<t<<"\n";
        cout<<flag<<"\n\n";
        t++;    
    }
    
    
    return 0;
}