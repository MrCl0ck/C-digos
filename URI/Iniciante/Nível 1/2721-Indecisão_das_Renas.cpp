#include <iostream>

using namespace std;

int main(){
    string s[9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    int pos = -1;

    for (int i = 0, x; i < 9; i++)
    {
        cin>>x;
        while (x>0)
        {
            x--;
            if(pos+1>8){
                pos=0;
            }
            else{
                pos++;
            }
        }        
    }
    
    cout<<s[pos]<<"\n";

    return 0;
}