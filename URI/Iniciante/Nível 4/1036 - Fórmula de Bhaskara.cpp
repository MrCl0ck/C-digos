//https://www.urionlinejudge.com.br/judge/pt/problems/view/1036
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float A, B, C, delta;
    //R = -b +- /(b*b) -4*a*c / 2a

    cin>>A>>B>>C;

    delta = (B*B) - 4*A*C;

    if(delta>=0 && A>0){
        cout<<"R1 = "<<fixed<<setprecision(5)<<((-1*B)+sqrt(delta))/(2*A)<<"\n";
        cout<<"R2 = "<<fixed<<setprecision(5)<<((-1*B)-sqrt(delta))/(2*A)<<"\n";
    }
    else{
        cout<<"Impossivel calcular"<<"\n";
    }



	return 0;
}
