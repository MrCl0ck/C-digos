#include <iostream>
using namespace std;

int main(){
    int ciclos = 0, i = 1;

    while(true){
        cin>>ciclos;

        if(ciclos == -1){
            break;
        }

        cout<<"Experiment " <<i <<": " <<ciclos/2 <<" full cycle(s)"<<"\n";
        i++;
    }

    return 0;
}
