#include <iostream>
#include <cmath>
using namespace std;

int bin_to_dec(string num)
{
    int x = 0;

    for (int i = 0, z=0, exp = num.size()-1; i < num.size(); i++, exp--)
    {
        if(num[i]=='-'){
            z = 0;
        }
        else if(num[i] == '*'){
            z = 1;
        }
        x += z*pow(2,exp);
    }    
    return x;
}

int main()
{
    string f;
    int soma = 0;
    while (getline(cin, f))
    {
        if(f != "caw caw")
        {
           soma += bin_to_dec(f);
        }
        else{
            cout<<soma<<"\n";
            soma = 0;
        }
    }
    
    return 0;
}
