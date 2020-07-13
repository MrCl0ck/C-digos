//text
#include <iostream>

using namespace std;

int main(){
    int inicial, trocas, X;

    cin>>inicial>>trocas;

    for(int i=0; i<trocas; ++i){
        cin>>X;

        if(X>0){
            if(inicial+X>=100){
                inicial = 100;
            }
            else{
                inicial += X;
            }
        }
        else if(X<0){
            if(inicial+X<=0){
                inicial = 0;
            }
            else{
                inicial += X;
            }
        }

    }

    cout<<inicial <<"\n";

	return 0;
}
