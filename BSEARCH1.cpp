#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(const vector< int64_t >& v, const int64_t& x)
{
    int first = 1;
    int last = v.size();
    int middle;

    while (first<=last)
    {
        middle = (first+last)/2;
        if(v[middle] == x)
        {            
            return middle; // retorna a posição onde está o número
        }
        if (v[middle] < x)//se o número estiver depois do meio...
        {
            first = middle+1;//o final vai ser o meio + 1, pois o número é maior que o que está no meio...
        }
        if (v[middle] > x)//se o número estiver antes do meio...
        {
            last = middle-1;//o final vai ser o meio - 1, pois o número é menor que o que está no meio...
        }        
    }

    return -1; // não achou o número....    
}

int main()
{
    int n, m;

    cin>>n>>m;

    vector< int64_t > vetor(n);

    for (int i = 0; i < n; i++)
    {
        cin>>vetor[i];
    }
    
    int64_t x, res;

    for (int i = 0; i < m; i++)
    {
        cin>>x;

        res = lower_bound(vetor.begin(), vetor.end(), x) - vetor.begin();
        (res == n)?cout<<-1<<"\n":cout<<res<<"\n";
    }
    
    return 0;
}
