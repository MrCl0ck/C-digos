//https://www.urionlinejudge.com.br/judge/pt/problems/view/1073
#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i=2; i<=n; ++i){
        if(i%2==0){
            cout<<i<<'^'<<2<<" = "<<i*i<<"\n";
        }
    }

	return 0;
}
