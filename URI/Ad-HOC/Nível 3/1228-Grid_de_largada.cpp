#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    while (cin>>n)
    {
        vector< int > largada(25), saida(25);

        for (int i = 0, x; i < n; i++)
        {
            cin>>largada[i];
        }
        
        for (int i = 0, x; i < n; i++)
        {
            cin>>saida[i];
        }

        int cont=0;

        for (int i = 0; i < n; i++)
        {
            if(saida[i]<largada[i])
            {
                cont++;
            }
        }

        cout<<cont<<"\n";
    }
    
    return 0;
}
