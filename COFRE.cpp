#include <iostream>

using namespace std;

int main(){
    int s=1;
    int n;

    while (cin>>n && n)
    {
        int dif[n];
        
        for (int i = 0, x, y; i < n; i++)
        {
            cin>>x>>y;

            if(i==0){
                dif[i]=x-y;
            }
            else{
                dif[i]=x-y+dif[i-1];
            }
        }
        
        cout<<"Teste "<<s<<"\n";
        for (int i = 0; i < n; i++)
        {
            cout<<dif[i]<<"\n";
        }
        cout<<"\n";
        s++;
    }
    
    return 0;
}