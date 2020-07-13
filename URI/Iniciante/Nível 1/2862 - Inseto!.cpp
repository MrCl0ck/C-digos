//https://www.urionlinejudge.com.br/judge/pt/problems/view/2862
#include <iostream>

using namespace std;

int main(){
    int C;

    cin>>C;

    for(int i=0, X=0; i<C;++i){
        cin>>X;

        if(X>8000){
            cout<<"Mais de 8000!"<<"\n";
        }
        else{
            cout<<"Inseto!"<<"\n";
        }
    }

	return 0;
}
