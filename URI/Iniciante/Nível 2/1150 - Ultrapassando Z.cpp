//https://www.urionlinejudge.com.br/judge/pt/problems/view/1150
/*

*/
#include <iostream>

using namespace std;

int main(){
    int x, z, t=1;

    cin>>x;

    while(cin>>z){
        if(z<=x)
            continue;

        while(x<=z){
            z -= x;
            x++;
            t++;
        }
        break;
    }

    cout<<t<<"\n";

	return 0;
}
