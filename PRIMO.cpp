#include <iostream>
using namespace std;

int primo(long long int x){
    for (long long int i = 2; i*i <= x; i++)
    {
        if(x%i==0){
            return 0;
            break;
        }
    }
    return 1;    
}

int main(){
    long long int n;

    cin>>n;

    int res = primo(n);

    if(res == 1){
        cout<<"sim\n";
    }
    else{
        cout<<"nao\n";
    }
    
    return 0;
}