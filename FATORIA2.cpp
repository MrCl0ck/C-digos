#include <iostream>
using namespace std;

int main(){
    int n;
    long int x = 1;
    
    cin>>n;   

    for (int i = 1; i <= n; i++)
    {
        x*=i;
    }
    
    cout<<x<<"\n";
    
    return 0;
}