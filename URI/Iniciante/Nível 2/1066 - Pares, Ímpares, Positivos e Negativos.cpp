//https://www.urionlinejudge.com.br/judge/pt/problems/view/1066
#include <iostream>

using namespace std;

int main(){
    int n;
    int p = 0, imp = 0, pos = 0, neg = 0;

    for(int i=0; i<5; ++i){
        cin>>n;

        if(n%2==0){
            p++;
        }
        else{
            imp++;
        }
        if(n>0){
            pos++;
        }
        else if(n<0){
            neg++;
        }
    }

    cout<<p<<" valor(es) par(es)\n";
    cout<<imp<<" valor(es) impar(es)\n";
    cout<<pos<<" valor(es) positivo(s)\n";
    cout<<neg<<" valor(es) negativo(s)\n";

	return 0;
}
