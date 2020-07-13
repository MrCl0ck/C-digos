//https://www.urionlinejudge.com.br/judge/pt/problems/view/2759
#include <iostream>

using namespace std;

int main(){
    char letra[3][1] = {0};

    cin>>letra[0][0]>>letra[1][0]>>letra[2][0];

	cout<<"A = " <<letra[0][0] <<", B = " <<letra[1][0] <<", C = " <<letra[2][0] <<"\n";
	cout<<"A = " <<letra[1][0] <<", B = " <<letra[2][0] <<", C = " <<letra[0][0] <<"\n";
	cout<<"A = " <<letra[2][0] <<", B = " <<letra[0][0] <<", C = " <<letra[1][0] <<"\n";

	return 0;
}
