#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    
    cin>>n;

    vector< int > vetor(n);

    for (int i = 0; i < n; i++)
    {
        cin>>vetor[i];
    }

    sort(vetor.begin(), vetor.end());

    cout<<vetor[n/2]<<"\n";

    return 0;
}
