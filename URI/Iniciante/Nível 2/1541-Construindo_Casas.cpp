#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, area=0, t=0;

    while (cin>>a && a && cin>>b>>c)
    {
        area=a*b;
        t=(area*100)/c;
        cout<<int(sqrt(t))<<"\n";
    }
    
    return 0;
}