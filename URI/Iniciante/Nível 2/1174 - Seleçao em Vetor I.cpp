//https://www.urionlinejudge.com.br/judge/pt/problems/view/1174
/*

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a;

    for(int i=0; i<100; ++i){
        cin>>a;

        if(a<=10){
            cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<a<<"\n";
        }
    }

	return 0;
}
