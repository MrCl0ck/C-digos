//https://www.urionlinejudge.com.br/judge/pt/problems/view/1096
#include <iostream>

using namespace std;

int main(){
    for(int j=7, i=1; i<=9; --j){
        cout<<"I="<<i<<" J="<<j<<"\n";
        if(j==5){
            j=8;
            i+=2;
        }
    }

	return 0;
}
