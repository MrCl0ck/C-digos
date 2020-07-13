//https://www.urionlinejudge.com.br/judge/pt/problems/view/1159
#include <iostream>

using namespace std;

int main(){
    int n, t=0;

    while(cin>>n && n){
        for(int i=n,j=0; j<5; ++i){
            if(i%2==0){
                t += i;
                j++;
            }
        }
        cout<<t<<"\n";
        t=0;
    }

	return 0;
}
