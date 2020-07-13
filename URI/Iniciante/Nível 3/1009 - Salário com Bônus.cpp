//https://www.urionlinejudge.com.br/judge/pt/problems/view/1009
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sal, sells;
    string name;

    cin>>name;
    cin>>sal>>sells;

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<sal+(0.15*sells)<<"\n";

	return 0;
}
