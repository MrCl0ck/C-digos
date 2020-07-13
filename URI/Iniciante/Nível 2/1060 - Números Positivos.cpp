//https://www.urionlinejudge.com.br/judge/pt/problems/view/1060
#include <iostream>

using namespace std;

int main(){
    float n;
    int cont = 0;

    for(int i=0; i<6; ++i){
        cin>>n;

        if(n>0){
            cont++;
        }
    }

    cout<<cont<<" valores positivos\n";

	return 0;
}
