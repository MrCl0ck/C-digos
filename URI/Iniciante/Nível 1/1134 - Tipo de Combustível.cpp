//https://www.urionlinejudge.com.br/judge/pt/problems/view/1134
#include <iostream>

using namespace std;

int main(){
    int n, g=0,a=0,d=0;

    while(true)
    {
        cin>>n;
        switch(n){
            case 1:{
                a++;
                break;
            }
            case 2:{
                g++;
                break;
            }
            case 3:{
                d++;
                break;
            }
        }

        if(n==4){
            break;
        }
    }

    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<a<<"\n";
    cout<<"Gasolina: "<<g<<"\n";
    cout<<"Diesel: "<<d<<"\n";

	return 0;
}
