#include <iostream>
#include <map>
using namespace std;

int main()
{
    map< char, double > BASE;

    BASE['W'] = 1;
    BASE['H'] = double(1.0)/2.0;
    BASE['Q'] = double(1.0)/4.0;
    BASE['E'] = double(1.0)/8.0;
    BASE['S'] = double(1.0)/16.0;
    BASE['T'] = double(1.0)/32.0;
    BASE['X'] = double(1.0)/64.0;

    string f;

    while (cin>>f && f != "*")
    {
        int cont = 0;
        double compasso = 0;
        for (int i = 0; i < f.size(); i++)
        {
            if(f[i] == '/' && i+1 < f.size())
            {
                i++;
                while (f[i] != '/')
                {
                    compasso += BASE[f[i]];
                    //cout<<"base da letra "<<f[i]<<":"<<BASE[f[i]]<<", total: "<<compasso<<"\n";
                    i++;                    
                }
                i--;
                if(compasso == 1)
                {
                    cont++;
                }
                compasso = 0;
            }
        }
        
        cout<<cont<<"\n";
    }
    
    

    return 0;
}