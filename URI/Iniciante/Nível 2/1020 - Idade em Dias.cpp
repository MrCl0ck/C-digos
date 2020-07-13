//https://www.urionlinejudge.com.br/judge/pt/problems/view/1020
#include <iostream>

using namespace std;

int main(){
    int dias;

    cin>>dias;

    cout<<dias/365<<" ano(s)"<<"\n";
    cout<<(dias%365)/30<<" mes(es)"<<"\n";
    cout<<(dias%365)%30<<" dia(s)"<<"\n";

	return 0;
}
