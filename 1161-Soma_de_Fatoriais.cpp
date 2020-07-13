#include <iostream>
using namespace std;

int64_t fatorial(int64_t a, int64_t b){
    int i=1;
    int64_t x=1, y=1;
    while (i <= max(a,b))
    {
        if(i<=a)
        {
            x*=i;
        }
        if (i<=b)
        {
            y*=i;
        }
        i++;            
    }
    return x+y;    
}

int main(){
    int64_t a, b;
    while (cin>>a>>b)
    {
        cout<<fatorial(a, b)<<"\n";
    }

    return 0;
}