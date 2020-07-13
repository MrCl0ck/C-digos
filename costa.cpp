#include <iostream>
#include <vector>
using namespace std;

int campo[1010][1010];
//quando se tem grafos é interessante sempre criar campos maiores, pois verificações com linha e coluna fora do escopo
//podem dar acesso invalido de memória, logo, comece com linhas e colunas a partir de 1, margem de segurança

int main()
{
    int lin, col;

    cin>>lin>>col;

    char a;

    for (int i = 1; i <= lin; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cin>>a;           

            if(a=='#')
            {
                campo[i][j] = 1;
            }
        }
        

    }

    int costa = 0;

    for (int i = 1; i <= lin; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (campo[i][j]==1)
            {
                
                if(campo[i-1][j] == 0 || campo[i][j-1] == 0 || campo[i+1][j] == 0 || campo[i][j+1] == 0)
                {
                    //cout<<" "<<campo[i-1][j]<<"\n"<<campo[i][j-1]<<campo[i][j]<<campo[i][j+1]<<"\n "<<campo[i-1][j]<<"\n\n";
                    costa++;
                }
            }           
        }   
    }
    
    cout<<costa<<"\n";

    return 0;
}