//https://www.urionlinejudge.com.br/judge/pt/problems/view/1019
#include <iostream>

using namespace std;

int main(){
    int N;

    cin>>N;

    cout<<N/3600<<":"<<(N%3600)/60<<":"<<(N%60)<<"\n";//horas:minutos:segundos

	return 0;
}
