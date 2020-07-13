#include <iostream>
using namespace std;

string funcoes(int, int);

int main(){
    int x, y, casos;

    cin>>casos;

    for(int i=0; i<casos ; ++i){
        cin>>x>>y;
        cout<<funcoes(x,y)<<"\n";
    }

    return 0;
}

string funcoes(int x, int y){
    int beto = 0, carlos = 0, rafael = 0, maior = 0;
    string retorno;
    beto = 2*(x*x) + ((5*y)*(5*y));
    carlos = -100*x + (y*y*y);
    rafael = ((3*x)*(3*x)) + y*y;

    maior = beto;
    retorno = "Beto ganhou";

    if(carlos>maior){
        maior = carlos;
        retorno = "Carlos ganhou";
    }
    if(rafael>maior){
        maior = rafael;
        retorno = "Rafael ganhou";
    }

    return retorno;
}
