#include <iostream>

using namespace std;

int main(){
    int n, m;

    cin>>n>>m;

    int sum_lin[100]={0}, sum_col[100]={0};

    for (int i = 0, x; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>x;
            sum_lin[i] += x;
            sum_col[j] += x;
        }
        
    }
    int64_t maior = sum_lin[0];

    for (int i = 0; i < n; i++)
    {
        if(maior<sum_lin[i]){
            maior = sum_lin[i];
        }        
    }

    for (int j = 0; j < m; j++)
    {
        if(maior<sum_col[j]){
            maior = sum_col[j];
        }
    }

    cout<<maior<<"\n";
    return 0;
}