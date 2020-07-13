#include <iostream>

using namespace std;

int main(){
    int value, banks[7]={100,50,20,10,5,2,1};

    cin>>value;

    for (int i = 0, c = 0; i < 7; i++, c = 0)
    {
        while (value>=banks[i])
        {
            value -= banks[i];
            c++;
        }
        cout<<c<<" nota(s) de R$ "<<banks[i]<<",00"<<"\n";
    }
    

    return 0;
}