//https://www.urionlinejudge.com.br/judge/pt/problems/view/2235
#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    cin>>a>>b>>c;

    if((a==b)||(b==c)||(c==a)){
        cout<<"S\n";
    }
    else if(a==b && b==c){
        cout<<"S\n";
    }
    else if(a==b+c || b==c+a || c==a+b){
        cout<<"S\n";
    }
    else{
        cout<<"N\n";
    }

	return 0;
}
