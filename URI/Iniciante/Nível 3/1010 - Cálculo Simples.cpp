//https://www.urionlinejudge.com.br/judge/pt/problems/view/1010
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num1, qnt1, num2, qnt2;
    double val1, val2;

    cin>>num1>>qnt1>>val1;
    cin>>num2>>qnt2>>val2;

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<(qnt1*val1)+(qnt2*val2)<<"\n";

	return 0;
}
