#include <iostream>

using namespace std;

int main(){
    int n, c;

    cin>>n>>c;

    int s[n], e[n];

    int t=0;

    for (int i = 0; i < n; i++)
    {
        cin>>s[i]>>e[i];
    }

    for (int i = 0; i < n; i++)
    {
        t-= s[i];
        t+=e[i];

        if(t>c){
            break;
        }
    }

    if(t>c){
        cout<<"S\n";
    }
    else{
        cout<<"N\n";
    }
    
    return 0;
}