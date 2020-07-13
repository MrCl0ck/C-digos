//é só analizar o número de varetas, se o número de varetas for par, adicona a soma total, independe do tamanho, se o número de
//varetas for ímpar subtrai uma vareta da vez e adiciona ao total, ao final do programa só é dividir o total de varetas 
//por 4, vai resultar em o número máximo de retângulos que podem ser formados com aquelas varetas
//o retangulo tem que ter os lados inversos iguais, cima/baixo, esquerda/direita
#include <iostream>

using namespace std;

int main(){
    int varetas;

    while (cin>>varetas && varetas)
    {
        int t=0;
        for (int i = 0, x, y; i < varetas; i++)
        {
            cin>>x>>y;

            if(y%2!=0)
            {
                t+=y-1;
            }
            else if(y%2==0)
            {
                t+=y;
            }
        }

        cout<<t/4<<"\n";
    }
    
    
    return 0;
}