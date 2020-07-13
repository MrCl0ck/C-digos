#include <iostream>

using namespace std;

int main(){
    string cit = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int p;

    cin>>p;

    for (int i = 0; i < p; i++)
    {
        cout<<cit[i];
    }
    
    cout<<"\n";

    return 0;
}