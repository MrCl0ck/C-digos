#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int converter(char a)
{
    switch (a)
    {
        case 'A':
        {
            return 0;
            break;
        }
        case 'B':
        {
            return 1;
            break;
        }    
        case 'C':
        {
            return 2;
            break;
        }            
        case 'D':
        {
            return 3;
            break;
        }
        case 'E':
        {
            return 4;
            break;    
        }            
        default:
        {
            return -1;
            break;
        }
    }
}

int main()
{
    int n;

    while (cin>>n && n)
    {        
        map< int, vector< int > > associados[n];
        vector< int > digitos[5];
        vector< char > operacoes[n];
        for (int j = 0; j < n; j++)
        {
            char BASE = 'A'; 
            for (int i = 0, x, k = 1, y=0; i < 10; i++, k++)
            {
                cin>>x;

                digitos[j].push_back(x);
                if (k==2)
                {
                    k=-1;
                    associados[j][y] = digitos[j][i-1];
                    associados[j][y] = digitos[j][i-2];
                    y++;
                }                
            }
            sort(associados[j])
            cin.ignore();
            char t;
            for (int i = 0; i < 6; i++)
            {
                cin>>t;

                operacoes[j].push_back(t);
            }            
        }

        vector< int >::iterator it;
        vector< int > v;

        for (int i = 0; i < 6; i++)
        {
            it = associados[0][converter(operacoes[0][i])].begin();

            for (int j = 1; j < n; j++)
            {
                it = ection(associados[j-1][converter(operacoes[j][i])].begin(), 
                associados[j-1][converter(operacoes[j][i])].end(),
                it.begin(), it.end(),v.begin());
            }            
        }
          
                  
    }
    
    return 0;
}
