//https://www.urionlinejudge.com.br/judge/pt/problems/view/1118
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float nota, t= 0.0;
    int j=0, n=0;

    while(cin>>nota){
        if(nota>=0 && nota<=10){
            t += nota;
            j++;
        }
        else{
            cout<<"nota invalida"<<"\n";
        }

        if(j==2){
            cout<<"media = "<<fixed<<setprecision(2)<<t/2<<"\n";

            do{
                cout<<"novo calculo (1-sim 2-nao)\n";
                cin>>n;
            }while(n>2||n<1);

            if(n==1){
                j=0;
                t=0.0;
                continue;
            }
            else{
                break;
            }
        }
    }


	return 0;
}
