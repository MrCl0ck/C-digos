//https://www.urionlinejudge.com.br/judge/pt/problems/view/1002
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r, s;

    cin>>r;

    s = 3.14159*(r*r);

    cout<<"A="<<fixed<<setprecision(4)<<s<<"\n";

	return 0;
}
