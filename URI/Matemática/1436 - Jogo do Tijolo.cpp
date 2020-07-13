#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testes, membros, x;
    cin>>testes;

    for(int i = 1; i <= testes; i++){
        cin>>membros;
        vector<int> idade_m(membros);
        for(int j = 0; j < membros; j++){
            cin>>idade_m[j];
        }

        cout<<"Case " <<i <<": " <<idade_m[membros/2]<<"\n";
    }

    return 0;
}
