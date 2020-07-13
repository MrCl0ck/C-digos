#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void adicao_zero(string& a)
{
    int tam = a.size();

    reverse(a.begin(), a.end());

    for (int i = 4; i > tam; i--)
    {
        a += '0';
    }
    reverse(a.begin(), a.end());
}

int contador(const string& a, const string& b)
{
    int cont = 0;
    for (int i = 3, j = a.size()-1 , k = b.size()-1; i >= 0; i--, k--, j--)
    {
        if(a[j] == b[k])
        {
            cont++;
            //cout<<"letra do [a]: "<<a[j]<<" , letra do [b]: "<<b[k]<<"\n";
        }
    }

    if (cont == 1 || cont == 0)
    {
        int num1 = (a[a.size()-1] - '0')*1 + (a[a.size()-2] - '0')*10;
        int num2 = (b[b.size()-1] - '0')*1 + (b[b.size()-2] - '0')*10;

        int dif = num1 - num2;

        if (abs(dif) < 4 || (abs(dif)==97))
        {
            cont = 1;
        }
        else
        {
            cont = 0;
        }          
    }

    switch (cont)
    {
        case 4:
        {
            return 3000;
            break;
        }
        case 3:
        {
            return 500;
            break;
        }
        case 2:
        {
            return 50;
            break;
        }
        case 1:
        {
            return 16;
            break;
        }       
        default:
            return 0;
            break;
    }
          
}

int main()
{
    double v;
    int n, m;

    while (cin>>v>>n>>m)
    {
        if(v==0 && n==0 && m==0)
        {
            break;
        }

        string a, b;

        a = to_string(n);
        b = to_string(m);

        adicao_zero(a);
        adicao_zero(b);
        
        printf("%.2f\n", contador(a, b)*v);
    }
    
    return 0;
}