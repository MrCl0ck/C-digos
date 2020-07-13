//https://www.urionlinejudge.com.br/judge/pt/problems/view/1160
/*

*/
#include <iostream>

using namespace std;

int main(){
    int N, anos = 0;
    double p_p1, p_p2;
    int p1, p2;

    cin>>N;

    for(int i=0, j=0; i<N; ++i, j=0){
        cin>>p1>>p2>>p_p1>>p_p2;

        while(p1<=p2){
            p1 = p1 + (p1*(p_p1/100.0));
            p2 = p2 + (p2*(p_p2/100.0));
            j++;
            if(j>100){
                break;
            }
        }
        if(j>100){
            cout<<"Mais de 1 seculo.\n";
        }
        else{
            cout<<j<<" anos.\n";
        }
    }

	return 0;
}
