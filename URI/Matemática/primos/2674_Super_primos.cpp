#include <iostream>
#include <string>
using namespace std;
#define p 999999
bool eh_composto[1000010];

void crivo()
{
    eh_composto[1] = 1;
    for (int i = 2; i <= p; i++)
    {
        if (eh_composto[i] == 0)
        {
            for (int j = 2; j*i <= p; j++)
            {
                eh_composto[i*j] = 1;
            }            
        }        
    }
    return;    
}

int main()
{
    int n;

    crivo();

    string t;

    while (cin>>n)
    {
        if (eh_composto[n] == 0)
        {
            t = to_string(n);
            int flag = 1;
            
            for (int i = 0; i < (int)t.size(); i++)
            {
                if (eh_composto[t[i]-'0']==1)
                {
                    flag = 0; 
                    break;
                }                
            }    

            if (flag)
            {
                cout<<"Super\n";
            }
            else
            {
                cout<<"Primo\n";
            }
                    
        }
        else
        {
            cout<<"Nada\n";
        }
        
        
    }
    
    
    return 0;
}