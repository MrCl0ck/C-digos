#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
#define in vetor.begin()

vector< int64_t > vetor(100010);
int64_t acc = 0;
int a, b, c, d;
int temp_a, temp_b, temp_c, temp_d;

void oper()
{
    if(b<c)
    {
        acc = accumulate(in+a, in+b+1, acc);
        acc = accumulate(in+c, in+d+1, acc);
    }
    else if (b==c)
    {
        acc = accumulate(in+a, in+d+1, acc);        
    }
    else if (b>c)
    {
        if (c>a)
        {
            acc = accumulate(in+a, in+d+1, acc);
        }
        else
        {
            acc = accumulate(in+c, in+d+1, acc);                     
        }
    }  
}

int main()
{
    int n, m;
    int q, w, e;

    cin>>n>>m;

    for (int i = 0; i < m; i++,acc=0)
    {
        cin>>q;
        if (q == 1)
        {
            cin>>w>>e;
            vetor[w] += e;
        }
        else
        {
            cin>>a>>b>>c>>d;

            if (a>d)
            {
                temp_a = c, temp_b = d, temp_c = a, temp_d = b;
                a = temp_a, b = temp_b, c = temp_c, d = temp_d;
            }

            oper();

            cout<<acc<<"\n";
        }       
    }
    
    return 0;
}