#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, c, d;

    cin>>a>>b>>c>>d;

    if (a<b+c)
    {
        cout<<"S\n";
    }
    else if (b<a+c)
    {
        cout<<"S\n";
    }
    else if (c<a+b)
    {
        cout<<"S\n";
    }
    else if (a<b+d)
    {
        cout<<"S\n";
    }
    else if (b<a+d)
    {
        cout<<"S\n";
    }
    else if (d<a+b)
    {
        cout<<"S\n";
    }
    else if (d<b+c)
    {
        cout<<"S\n";
    }
    else if (b<d+c)
    {
        cout<<"S\n";
    }
    else if (c<d+b)
    {
        cout<<"S\n";
    }
    else
    {
        cout<<"N\n";
    }
    
    
    return 0;
}
