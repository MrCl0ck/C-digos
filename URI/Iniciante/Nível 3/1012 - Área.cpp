//https://www.urionlinejudge.com.br/judge/pt/problems/view/1012
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A,B,C;

    cin>>A>>B>>C;

    cout<<"TRIANGULO: " <<fixed<<setprecision(3)<<(A*C)/2 <<"\n"; //Area = (base+altura)/2
    cout<<"CIRCULO: " <<fixed<<setprecision(3)<<(3.14159)*(C*C) <<"\n";//Area = pi*(raio*raio)
    cout<<"TRAPEZIO: " <<fixed<<setprecision(3)<<((A+B)/2)*C <<"\n";//A = ((B+b)/2)*h //B=base maior, b= base menor, h=altura, A=area da figura
    cout<<"QUADRADO: " <<fixed<<setprecision(3)<<(B*B) <<"\n";//Area = base*base
    cout<<"RETANGULO: " <<fixed<<setprecision(3)<<(A*B) <<"\n";//Area = base*altura


	return 0;
}
