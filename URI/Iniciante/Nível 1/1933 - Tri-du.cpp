//https://www.urionlinejudge.com.br/judge/pt/problems/view/1933
#include <iostream>

using namespace std;

int main(){
    int c1,c2,c3;

    cin>>c1>>c2;

    if(c1==c2){
        cout<<c2<<"\n";
    }
    else{
        c3 = c1>c2?c1:c2;
        cout<<c3<<"\n";
    }

	return 0;
}
