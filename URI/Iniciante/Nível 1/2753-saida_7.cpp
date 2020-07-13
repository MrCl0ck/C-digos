#include <iostream>
using namespace std;

int var[26];

int main()
{
    var[0]=97;
    for (int i = 1; i < 26; i++)
    {
        var[i] = var[0] + i;
    }
    
    for (int i = 0; i < 26; i++)
    {
        cout<<var[i]<<" e "<<char(var[i])<<"\n";
    }
    
    
    return 0;
}