#include <iostream>
using namespace std;

int main()
{
    int n, qs, iter = 1;
    string f, f_aux="";

    while (cin>>n && n)
    {
        cin.ignore();

        for (int i = 0, menor = 9999999; i < n; i++)
        {
            cin>>f>>qs;

            if(qs<menor){
                menor = qs;
                f_aux = f;                    
            }
            else if(qs==menor)
            {
                if(f_aux<f)
                {
                    f_aux = f;
                }
            }
        }

        cout<<"Instancia " <<iter<<"\n";
        cout<<f_aux<<"\n\n";
        iter++;
    }
    
    return 0;
}
