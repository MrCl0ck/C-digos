#include <iostream>
using namespace std;

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    return mdc(b, a%b);
}


int main(){
    int f1, f2, casos;

    cin>>casos;

    for(int i=0;i<casos;++i){
        cin>>f1>>f2;

        cout<<mdc(f2,f1)<<"\n";
    }

    return 0;
}


