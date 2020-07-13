#include <iostream>
using namespace std;

int c[4];

int main()
{
    int v, s = 1, i = 0;
    int cash[4] = {50, 10, 5, 1};


    while (cin>>v && v)
    {
        int c[4] = {0};

        while (v>0)
        {
            if(v-cash[i]>=0)
            {
                v = v - cash[i];
                c[i]++;
            }
            else
            {
                i++;
            }            
        }
        i=0;
        cout<<"Teste "<<s<<"\n";
        cout<<c[0] <<" " <<c[1] <<" " <<c[2] <<" " <<c[3] <<"\n\n";
        s++;
    }
    

    return 0;
}