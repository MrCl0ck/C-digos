//https://www.urionlinejudge.com.br/judge/pt/problems/view/1017
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int hours, km;

    cin>>hours>>km;

    cout<<fixed<<setprecision(3)<<(hours*km)/12.0<<"\n";

	return 0;
}
