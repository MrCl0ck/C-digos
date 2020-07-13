#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map< int, int > candidatos;
    int n;

    cin>>n;

    for (int i = 0, x; i < n; i++)
    {
        cin>>x;

        candidatos[x]++;
    }
    
    int maior = -1;
    int cand = 0;

    for (auto i:candidatos)
    {
        if (maior<i.second)
        {
            maior = i.second;
            cand = i.first;
        }
    }
    
    cout<<cand<<"\n";
    
    return 0;
}
