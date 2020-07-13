#include <iostream>

using namespace std;

void conceito(const int& x)
{
    if(x == 0){
        cout<<"E\n";
    }
    else if (x > 0 && x <= 35)
    {
        cout<<"D\n";
    }
    else if (x > 35 && x <= 60)
    {
        cout<<"C\n";
    }
    else if (x > 60 && x <= 85)
    {
        cout<<"B\n";
    }
    else if (x > 85 && x <= 100)
    {
        cout<<"A\n";
    }   
}

int main()
{
    int x;

    cin>>x; 

    conceito(x);
    
    return 0;
}
