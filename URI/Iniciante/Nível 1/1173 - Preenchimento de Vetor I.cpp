//https://www.urionlinejudge.com.br/judge/pt/problems/view/1173
/*

*/
#include <iostream>

using namespace std;

int main() {

    int v, c[10] = {0};

    cin>>v;

    c[0] = v;

    for(int i=0; i<10; ++i){
        if(i==0){
            cout<<"N["<<i<<"] = "<<v<<"\n";
        }
        else{
            c[i] = c[i-1]*2;
            cout<<"N["<<i<<"] = "<<c[i]<<"\n";
        }
    }

    return 0;
}
