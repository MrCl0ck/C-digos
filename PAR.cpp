#include <iostream>
using namespace std;

int main(){
    int n;
    int s=1;
    string j1, j2;

    while (cin>>n && n)
    {
        cin.ignore();
        cin>>j1>>j2;

        string ta = {""};

        for (int i = 0, t=0, a, b; i < n; i++)
        {
            cin>>a>>b;
            t=a+b;

            if(t%2==0){
                ta += j1+"\n";
            }
            else{
                ta += j2+"\n";
            }
        }

        cout<<"Teste " <<s <<"\n";
        cout<<ta<<"\n";
        s++;
    }    
    
    return 0;
}