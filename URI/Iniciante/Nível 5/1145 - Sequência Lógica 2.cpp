//https://www.urionlinejudge.com.br/judge/pt/problems/view/1145
#include <iostream>

using namespace std;

int main(){
    int x, y;

    cin>>x>>y;

    for(int i=1, j=1; i<=y; ++i){
        if(j<x){
            cout<<i<<" ";
            j++;
        }
        else{
            cout<<i<<"\n";
            j=1;
        }
    }

	return 0;
}
