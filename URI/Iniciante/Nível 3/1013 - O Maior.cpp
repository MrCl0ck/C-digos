//https://www.urionlinejudge.com.br/judge/pt/problems/view/1013
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int A,B,C, M;

    cin>>A>>B>>C;

    M = (A+B+abs(A-B))/2;

    M = (M+C+abs(M-C))/2;

    cout<<M<<" eh o maior"<<"\n";

	return 0;
}
