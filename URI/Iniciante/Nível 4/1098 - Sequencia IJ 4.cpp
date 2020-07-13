//https://www.urionlinejudge.com.br/judge/pt/problems/view/1098
#include <iostream>

using namespace std;

int main(){
    float j = 1, i = 0;
    for(int k=0, f=1; i<=2; ++k, ++j){
        cout<<"I="<<i<<" J="<<j<<"\n";
        if(k+1==3){
            j=0+(0.2*f);
            i=0+(0.2*f);
            k=-1;
            f++;
        }
    }

	return 0;
}
