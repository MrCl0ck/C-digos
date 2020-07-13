//https://www.urionlinejudge.com.br/judge/pt/problems/view/1177
#include <iostream>

using namespace std;

int main(){
    int T, v[1000] = {0};

    cin>>T;

    for(int i=0,j=0; j<1000; ++j,++i){
        v[j] = i;

        cout<<"N["<<j<<"] = "<<i<<"\n";

        if(i+1 == T){
            i=-1;
        }
    }

	return 0;
}
