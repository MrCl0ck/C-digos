//https://www.urionlinejudge.com.br/judge/pt/problems/view/1097
#include <iostream>

using namespace std;

int main(){
    for(int j=7, i=1, k=j; i<=9; --j){
        cout<<"I="<<i<<" J="<<j<<"\n";
        if(j==k-2){
            j=k+3;
            i+=2;
            k+=2;
        }
    }
	return 0;
}
