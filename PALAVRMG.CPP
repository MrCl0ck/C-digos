#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n;
    string f;

    cin>>n;
    cin.ignore();

    for (int i = 0, flag = 1; i < n; i++, flag = 1)
    {
        cin>>f;

        for (int j = 0; j < f.size()-1; j++)
        {
            if (tolower(f[j]) >= tolower(f[j+1]))
            {
                flag = 0;
                //cout<<f[j] <<" " <<f[j+1] <<"\n";
                break;
            }       
        }

        if(flag==1)        
        {
            cout<<f<<": O\n";
        }
        else
        {
            cout<<f<<": N\n";
        }
    }
    
    
    

    return 0;
}
