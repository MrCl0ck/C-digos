//https://www.urionlinejudge.com.br/judge/pt/problems/view/1866
#include <iostream>

using namespace std;

int main(){
    int C;

    cin>>C;

    for(int i=0, x; i<C ;++i){
        cin>>x;

        if(x%2 != 0){
            cout<<1<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }

	return 0;
}
