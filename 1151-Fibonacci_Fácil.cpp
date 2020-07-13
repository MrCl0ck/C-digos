//https://www.urionlinejudge.com.br/judge/pt/problems/view/1151
/*

*/
#include <iostream>

using namespace std;

int main(){
    int x, fib[46] = {0};

    cin>>x;

    fib[0] = 0;
    fib[1] = 1;

    for(int i=0; i<x; ++i){
        if(i<2){
            cout<<fib[i]<<" ";
        }
        else{
            fib[i] = fib[i-1] + fib[i-2];
            if(i+1<x){
                cout<<fib[i]<<" ";
            }
            else{
                cout<<fib[i]<<"\n";
            }
        }
    }

	return 0;
}
