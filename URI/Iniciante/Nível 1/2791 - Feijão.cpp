//https://www.urionlinejudge.com.br/judge/pt/problems/view/2791
#include <iostream>

using namespace std;

int main(){
    int C;

    for(int i=0; i<4; ++i){
        cin>>C;

        if(C)
            cout<<i+1<<"\n";
    }

	return 0;
}
