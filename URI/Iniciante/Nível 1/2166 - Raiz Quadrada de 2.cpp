//https://www.urionlinejudge.com.br/judge/pt/problems/view/2166
#include <iostream>

using namespace std;

int main(){
    double N, den = 0;

    cin>>N;

    for(int i=0;i<N; ++i){
        den += 2.0;
        den = (1/den);
    }

    den += 1.0;

    printf("%.10f\n",den);

	return 0;
}
