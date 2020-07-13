//https://www.urionlinejudge.com.br/judge/pt/problems/view/1164
#include <iostream>

using namespace std;

int main(){
    int N;
    long long int X;

    cin>>N;

    for(int i=0, flag = 0;i<N;++i, flag=0){
        cin>>X;
        for(int j=1;j<X;++j){
            if(X%j==0){
                flag += j;
            }
        }

        if(flag == X){
            cout<<X <<" eh perfeito"<<"\n";
        }
        else{
            cout<<X <<" nao eh perfeito"<<"\n";
        }

    }

	return 0;
}
