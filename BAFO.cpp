#include <iostream>
using namespace std;

int main(){
    int n;
    int a, b, ta = 0, tb=0, s=1;

    while (cin>>n && n)
    {
        for (int i = 0; i < n; i++)
        {
            cin>>a>>b;
            
            ta+=a;
            tb+=b;
        }

        if(ta>tb){
            cout<<"Teste "<<s<<"\n";
            cout<<"Aldo\n";
        }
        else{
            cout<<"Teste "<<s<<"\n";
            cout<<"Beto\n";
        }
        s++;
        ta=0;
        tb=0;
    }    
    
    return 0;
}