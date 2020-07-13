#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int64_t n;
    double p, m;

    cin>>n;

    p = n/(log(n));
    m = 1.25506*(n/(log(n)));

    cout<<fixed<<setprecision(1)<<p<<" "<<m<<"\n";
    
    return 0;
}