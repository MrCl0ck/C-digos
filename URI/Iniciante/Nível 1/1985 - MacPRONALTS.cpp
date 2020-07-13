//https://www.urionlinejudge.com.br/judge/pt/problems/view/1985
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int p, q, n;
    double t=0;

    cin>>n;

    for(int i=0; i<n ; ++i){
        cin>>p>>q;

        t+=((p%1000)+0.50)*q;
    }

    cout<<fixed<<setprecision(2)<<t<<"\n";

	return 0;
}
