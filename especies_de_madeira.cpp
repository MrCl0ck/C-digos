#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string f;
    map< string, int > valores;

    cin>>n;
    cin>>f;
    

    for (int i = 0, cont = 0; i < n; i+0)
    {
        getline(cin, f);

        if (f=="")
        {
            i++;
            for (map< string, int >::iterator it = valores.begin(); it != valores.end(); it++)
            {
                cout<<it->first<<" " <<fixed<<setprecision(4)<<float((it->second*100)/float(cont))<<"\n";
            }        
            cont = 0;
            valores.clear();
            cout<<"\n";
            continue;    
        }

        cont++;
        valores[f]++;
        //cout<<f<<", contados: "<<valores[f]<<"\n";
    }
    

    
    
    

    return 0;
}