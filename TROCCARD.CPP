#include <iostream>
#include <set>
using namespace std;

int cont(set< int >& maior, set< int >& menor)
{
    int ori = maior.size();

    for (set< int >::iterator it = menor.begin(); it != menor.end(); it++)
    {
        maior.insert(*it);
    }

    return (int)maior.size()-ori;
}

int main()
{
    int n, m;
    
    cin>>n>>m;
    
    set< int > v1, v2;

    for (int i = 0, x; i < n; i++)
    {
        cin>>x;

        v1.insert(x);
    }
    
    for (int i = 0, x; i < m; i++)
    {
        cin>>x;

        v2.insert(x);
    }

    int res;

    if(v1.size()<v2.size())
    {
        res = cont(v2,v1);
    }
    else if(v2.size()<v1.size())
    {
        res = cont(v1,v2);
    }
    else
    {
        res = cont(v1,v2);
    }
    
    cout<<res<<"\n";


    return 0;
}
