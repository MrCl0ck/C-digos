//https://www.urionlinejudge.com.br/judge/pt/problems/view/2764
#include <iostream>

using namespace std;

int main(){
    char dia[2], mes[2],ano[2], barra;

    cin>>dia[0]>>dia[1]>>barra>>mes[0]>>mes[1]>>barra>>ano[0]>>ano[1];

    cout<<mes[0]<<mes[1]<<'/'<<dia[0]<<dia[1]<<'/'<<ano[0]<<ano[1]<<"\n";
    cout<<ano[0]<<ano[1]<<'/'<<mes[0]<<mes[1]<<'/'<<dia[0]<<dia[1]<<"\n";
    cout<<dia[0]<<dia[1]<<'-'<<mes[0]<<mes[1]<<'-'<<ano[0]<<ano[1]<<"\n";

	return 0;
}
