//https://www.urionlinejudge.com.br/judge/pt/problems/view/1188
#include <iostream>

using namespace std;

int main(){
    char O;
    float matriz[12][12] = {0}, total = 0;

    cin>>O;

    for(int i=0; i<12; ++i){
        for(int j=0; j<12; ++j){
           cin>>matriz[i][j];
        }
    }

    for(int i=7, j=5; i<12; ++i, --j){
        for(int k=i-1; k>=j; --k){
            total += matriz[i][k];
        }
    }

    if(O == 'S'){
        printf("%.1f\n",total);
    }
    else if(O == 'M'){
        printf("%.1f\n",total/30);
    }

	return 0;
}
