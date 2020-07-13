#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int rec;

    while (cin>>rec)
    {
        if(rec){//se o valor for diferente de zero... if(rec) é a mesma coisa que if(rec != 0)
            cout<<"vai ter duas!\n";
        }
        else{
            cout<<"vai ter copa!\n";
        }
    }    
    
    return 0;
}