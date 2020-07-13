//https://www.urionlinejudge.com.br/judge/pt/problems/view/1011
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double r, volume;

    cin>>r;

    volume = (4.0/3)*3.14159*(r*r*r);//Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3),
    // pois algumas linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é outro inteiro.

    cout<<"VOLUME = "<<fixed<<setprecision(3)<<volume<<"\n";

	return 0;
}
