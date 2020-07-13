//https://www.urionlinejudge.com.br/judge/pt/problems/view/1963
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b;//sempre usar double, pois float tem problemas de precisão

    cin>>a>>b;

    cout<<fixed<<setprecision(2)<<((b-a)/a)*100<<"%\n";

	return 0;
}
