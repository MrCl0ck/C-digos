//https://www.urionlinejudge.com.br/judge/pt/problems/view/1080
#include <iostream>

using namespace std;

int main(){
    int x, maior = 0, pos = 0;

    for(int i=0; i<100 ; ++i){
        cin>>x;

        if(maior<x){
            maior = x;
            pos = i+1;
        }
    }

    cout<<maior<<"\n"<<pos<<"\n";

	return 0;
}
