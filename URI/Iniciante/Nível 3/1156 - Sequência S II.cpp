//https://www.urionlinejudge.com.br/judge/pt/problems/view/1156
/*

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float s = 0, num = 1, den = 1;

    while(num<39){
        s += num/den;
        num += 2;
        den *= 2;
    }

    cout<<fixed<<setprecision(2)<<s<<"\n";

	return 0;
}
