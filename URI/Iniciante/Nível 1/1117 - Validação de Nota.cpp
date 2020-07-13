//https://www.urionlinejudge.com.br/judge/pt/problems/view/1117
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float nota, t= 0.0;
    int j=0;

    while(j< 2 && cin>>nota){
        if(nota>=0 && nota<=10){
            t += nota;
            j++;
        }
        else{
            cout<<"nota invalida"<<"\n";
        }
    }

    cout<<"media = "<<fixed<<setprecision(2)<<t/2<<"\n";

	return 0;
}
