//https://www.urionlinejudge.com.br/judge/pt/problems/view/1175
#include <iostream>

using namespace std;

int main(){
    int N[20] = {0};

    for(int i=19; i>=0; --i){
        cin>>N[i];
    }

    for(int j=0; j<20; j++){
        cout<<"N["<<j<<"] = "<<N[j]<<"\n";
    }

	return 0;
}
