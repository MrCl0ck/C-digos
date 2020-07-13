#include <iostream>

using namespace std;

int main(){
    int n, menor=21, pos=-1;

    cin>>n;

    for (int i = 0, x; i < n; i++)
    {
        cin>>x;

        if(x<menor){
            menor=x;
            pos=i+1;
        }
    }

    cout<<pos<<"\n";

    return 0;
}