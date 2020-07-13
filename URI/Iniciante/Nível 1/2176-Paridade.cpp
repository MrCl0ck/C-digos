#include <iostream>

using namespace std;

int main(){
    string bits;
    int cont=0;

    cin>>bits;

    for (int i = 0; i < bits.size(); i++)
    {
        if(bits[i] == '1'){
            cont++;
        }
    }

    if(cont%2==0){
        bits += '0';
    }
    else{
        bits += '1';
    }    

    cout<<bits<<"\n";

    return 0;
}