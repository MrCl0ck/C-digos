//https://www.urionlinejudge.com.br/judge/pt/problems/view/1149
#include <iostream>

using namespace std;

int main(){
    int N,x,y;

    while(cin>>N && N<=0){

    }

    x=N;

    while(cin>>N && N<=0){

    }

    int total = 0;

    for(int i=0, j=x;i<N;++i){
        total += (j+i);
    }

    cout<<total<<"\n";

	return 0;
}
