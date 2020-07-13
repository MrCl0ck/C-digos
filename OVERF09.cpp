#include <iostream>

using namespace std;

int main(){
    int n1, n2, t;
    char op;

    cin>>t;
    cin>>n1>>op>>n2;

    if(op=='+')
    {
        n1 += n2;
    }
    else if (op=='*')
    {
        n1 *= n2;
    }

    if(n1<=t){
        cout<<"OK\n";
    }
    else{
        cout<<"OVERFLOW\n";
    }
    
    return 0;
}