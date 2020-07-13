#include <iostream>
using namespace std;
#define INF 999999999
int main()
{
    int num, soma;

    cin>>num>>soma;

    int estados[soma+1];//estados da soma, valores mínimos para cada soma
    int moedas[num];//moedas...

    for (int i = 1; i <= soma; i++)
    {
        estados[i] = INF;
    }

    estados[0] = 0;

    for (int i = 0; i < num; i++)
    {
        cin>>moedas[i];
    }

   for (int i = 1; i <= soma; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (moedas[j]<=i && (estados[i-moedas[j]]+1 < estados[i]))
            {
                estados[i] = estados[i-moedas[j]]+1;
            }            
        }
        cout<<"moedas minimas para a soma ate o numero "<<i<<": "<<estados[i]<<"\n";
    }
    
    
        

    return 0;
}

/*


*/