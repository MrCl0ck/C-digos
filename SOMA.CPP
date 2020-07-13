#include <iostream>
using namespace std;

int main(){
    int n, x, t=0;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>x;

        t+=x;
    }

    cout<<t<<"\n";    
    
    return 0;
}