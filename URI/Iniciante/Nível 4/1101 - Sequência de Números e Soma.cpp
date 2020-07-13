//https://www.urionlinejudge.com.br/judge/pt/problems/view/1101
#include <iostream>

using namespace std;

void res(int m, int n){
    int t=0;
    while(n<=m){
        t+=n;
        cout<<n<<" ";
        n++;
    }
    cout<<"Sum="<<t<<"\n";
}

int main(){
    int m, n;

    while(cin>>m>>n &&(m&&n)){//(m&&n), significa que se uma das entradas for zero ela sai da iteração...
        if(m<0 || n<0)
            break;
        res(max(m,n), min(m,n));
    }

	return 0;
}
