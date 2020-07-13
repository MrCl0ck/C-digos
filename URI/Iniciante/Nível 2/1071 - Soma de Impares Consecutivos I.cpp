//https://www.urionlinejudge.com.br/judge/pt/problems/view/1071
#include <iostream>

using namespace std;

int main(){
    int x, y, menor, maior, res = 0;

    cin>>x>>y;

    if(x>=y){
        maior=x;
        menor=y;
    }
    else{
        maior=y;
        menor=x;
    }

    for(int i=menor+1; i<maior; ++i){
        if(i%2!=0){
            res+=i;
        }
    }

    cout<<res<<"\n";

	return 0;
}
