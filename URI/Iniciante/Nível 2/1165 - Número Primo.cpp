//https://www.urionlinejudge.com.br/judge/pt/problems/view/1165
/*

*/
#include <iostream>

using namespace std;

int main(){
    long long int n;

    cin>>n;

    for(int i=0, x, flag=1; i < n ; i++, flag=1){
        cin>>x;

        for(int j=2; j*j<=x; ++j){
            if(x%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<x<<" eh primo\n";
        }
        else{
            cout<<x<<" nao eh primo\n";
        }
    }

    return 0;
}
