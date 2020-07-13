#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int r;

    cin>>r;

    for (int i = 0; i < r; i++)
    {
        if(i+1<r){
            cout<<"Ho ";
        }
        else{
            cout<<"Ho!\n";
        }
    }
    
    
    return 0;
}