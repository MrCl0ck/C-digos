#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
   int n;

   while (cin>>n)
   {
       vector< int > chegada(n), partida(n);
       map< int, int > mapa_c, mapa_p;

       for (int i = 0; i < n; i++)
       {
           cin>>partida[i];
           cout<<"velocista: " <<partida[i] <<" na posicao "<<i+1<<"\n";
           mapa_p[partida[i]] = i+1;
       }

       for (int i = 0; i < n; i++)
       {
           cin>>chegada[i];
           cout<<"velocista: " <<chegada[i] <<" na posicao "<<i+1<<"\n";
           mapa_c[chegada[i]] = i+1;
       }

        int cont=0;

       for (int i = 1; i <= n; i++)
       {
            for (int j = 1; j <= n; j++)
            {
                if(i<j)                            
                {
                    if(mapa[v[i]]>mapa[v[j]])
                    {
                        
                    }
                }
                else
                {
                    break;
                }
            }         
       }
       
       cout<<cont<<"\n";
                  
   }

    return 0;
}
