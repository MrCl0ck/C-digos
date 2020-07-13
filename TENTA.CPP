#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void imprime(const vector< int64_t >& v, const int& n){
    for (int i = 0; i < n; i++)
    {
        if(i+1<n)
        {
            cout<<v[i]<<" ";
        }
        else
        {
            cout<<v[i]<<"\n";
        }
    }
}

int main()
{
    int n;

    while (cin>>n && n)
    {
        vector< int64_t > v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        do
        {
            imprime(v, n);
        } while(next_permutation(v.begin(), v.end()));
        cout<<"\n";     
    }
    
    return 0;
}
