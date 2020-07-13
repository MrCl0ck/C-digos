#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    int m, n;

    cin>>t;

    string f, g;

    for (int i = 0; i < t; i++)
    {
        cin>>m>>n;
        cin.ignore();

        map< string, string > mapa;

        for (int j = 1; j <= m*2; j++)
        {
            if (j%2==0)
            {
                getline(cin, g);
                mapa[f] = g;
                //cout<<"palavra: " <<f<<"traducao: " <<mapa[f]<<"\n";
            }
            else
            {
                getline(cin, f);                
            }           
        }

        for (int j = 0, k = 0, flag = 0; j < n; j++, flag = 0)
        {
            getline(cin, f);
            g="";

            for (k = 0; k < f.size(); k++)
            {
                if (f[k] != ' ')
                {
                    g += f[k];
                    flag = 1;
                }
                else
                {       
                    if (mapa[g]!="")
                    {
                        if (k-1==0)
                        {
                            cout<<mapa[g];                            
                        }
                        else
                        {
                            cout<<" "<<mapa[g];
                        }
                    }         
                    else
                    {
                        if (k-1==0)
                        {
                            cout<<g;                            
                        }
                        else
                        {
                            cout<<" "<<g;
                        }
                    }              
                    g="";
                    flag = 0;
                }
            }

            if (flag == 1)
            {
                    if (mapa[g]!="")
                    {
                        if (k-1==0)
                        {
                            cout<<mapa[g];                            
                        }
                        else
                        {
                            cout<<" "<<mapa[g];
                        }
                    }         
                    else
                    {
                        if (k-1==0)
                        {
                            cout<<g;                            
                        }
                        else
                        {
                            cout<<" "<<g;
                        }
                    }              
            }
            
            cout<<"\n";
        }
    }
    

    return 0;
}