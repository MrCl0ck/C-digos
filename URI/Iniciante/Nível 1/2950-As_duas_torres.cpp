#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, x, y;

    cin>>n>>x>>y;

    cout<<fixed<<setprecision(2)<<1.0*n/(x+y)<<"\n";
    
    return 0;
}
