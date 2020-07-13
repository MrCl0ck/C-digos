#include <iostream>
#include <string>
using namespace std;

unsigned long long int vetor[1000010] = {1};

void precalc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        vetor[i] = i;
        for (int j = 1; j < i; j++)
        {
            vetor[i] = (vetor[i]*j)%100000;
            if (vetor[i]%10 == 0)
            {
                vetor[i] = vetor[i]/10;
            }            
            //cout<<i<<":"<<vetor[i]<<"\n";
        }   
    }
    
}

int main()
{
    int n, s=1;


    while (cin>>n)
    {        
        precalc(n);
        cout<<"Instancia "<<s<<"\n";
        cout<<vetor[n]%10<<"\n";
        cout<<"\n";
        s++;
    }
    
    
    return 0;
}
