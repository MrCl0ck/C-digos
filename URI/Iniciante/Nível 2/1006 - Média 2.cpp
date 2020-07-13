//https://www.urionlinejudge.com.br/judge/pt/problems/view/1006
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c;

    cin>>a>>b>>c;

    a = ((a*2)+(b*3)+(c*5))/10;

    cout<<"MEDIA = "<<fixed<<setprecision(1)<<a<<"\n";

	return 0;
}
