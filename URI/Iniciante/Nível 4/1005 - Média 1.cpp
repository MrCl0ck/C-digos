//https://www.urionlinejudge.com.br/judge/pt/problems/view/1005
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b;

    cin>>a>>b;

    a = ((a*3.5)+(b*7.5))/11;

    cout<<"MEDIA = "<<fixed<<setprecision(5)<<a<<"\n";

	return 0;
}
