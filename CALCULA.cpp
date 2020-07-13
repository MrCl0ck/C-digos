#include <iostream>

using namespace std;

int main(){
    string f;
    int n;
    int s=1;

    while (cin>>n && n)
    {
        char op=' '; int t=0;
        for (int i = 0, x; i < n; i++)
        {
            if(op!=' '){
                cin>>x;

                if(op == '+'){
                    t += x;
                }
                else{
                    t -= x;
                }
                
                if(i+1<n){
                    cin>>op;
                }                
            }
            else{
                cin>>x>>op;
                t+=x;
            }
        }
        cout<<"Teste "<<s<<"\n";
        cout<<t<<"\n\n";
        s++;
    }
    
    return 0;
}