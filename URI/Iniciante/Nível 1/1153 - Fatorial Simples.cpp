//https://www.urionlinejudge.com.br/judge/pt/problems/view/1153
#include <iostream>

using namespace std;

int main(){
    int N, t=1;

    cin>>N;

    for(int i=N; i>=1; --i){
        t *= i;
    }

    cout<<t<<"\n";

	return 0;
}
