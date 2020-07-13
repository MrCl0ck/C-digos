//https://www.urionlinejudge.com.br/judge/pt/problems/view/1172
/*

*/
#include <iostream>

using namespace std;

int main(){
    int X[10] = {0};

    for(int i=0; i<10; ++i){
        cin>>X[i];

        if(X[i] <= 0){
            X[i] = 1;
        }
        cout<<"X["<<i<<"] = "<<X[i]<<"\n";
    }

	return 0;
}
