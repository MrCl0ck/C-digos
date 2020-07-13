#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, s=1;
    int64_t t=0;
    while (cin>>x&&x)
    {
        t=pow(2,x)-1;
        cout<<"Teste "<<s<<"\n";
        cout<<t<<"\n\n";
        s++;
    }    
    
    return 0;
}