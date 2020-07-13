#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compara(int a, int b)
{
    return a>b;
}

int main()
{
    int atacantes, defensores;

    while (cin>>atacantes>>defensores && atacantes&&defensores)
    {
        vector< int > pos_a(atacantes), pos_d(defensores);

        for (int i = 0; i < atacantes; i++)
        {
            cin>>pos_a[i];
        }

        for (int i = 0; i < defensores; i++)
        {
            cin>>pos_d[i];
        }
        
        sort(pos_d.begin(), pos_d.end(), compara);

        int penultimo = pos_d[defensores-2];
        int impedido = 0;

        for (int i = 0; i < atacantes; i++)
        {
            if (pos_a[i]<penultimo)
            {
                impedido = 1;
                break;
            }
        }
        
        if(impedido == 1)
        {
            cout<<"Y"<<"\n";
        }
        else if(impedido == 0)
        {
            cout<<"N"<<"\n";
        }
        
    }
    

    
    return 0;
}
