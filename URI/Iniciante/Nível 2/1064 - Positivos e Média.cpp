//https://www.urionlinejudge.com.br/judge/pt/problems/view/1064
#include <iostream>

using namespace std;

int main(){
    float n,t=0;
    int cont = 0;

    for(int i=0; i<6; ++i){
        cin>>n;

        if(n>0){
            cont++;
            t+=n;
        }
    }

    cout<<cont<<" valores positivos\n";
    printf("%.1f\n",(t/cont));

	return 0;
}
