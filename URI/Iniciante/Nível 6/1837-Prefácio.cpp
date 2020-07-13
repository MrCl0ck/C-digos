#include <iostream>

using namespace std;

int main(){
    int resto, quociente, a, b;

    while (cin>>a>>b)
    {
        resto = a%b;
        quociente = a/b;
        if(resto < 0){
            if(b>0){
                resto = resto - (-1*b);
            }
            else{
                resto = resto - b;
            }
            if (quociente < 0)
            {
                quociente--;    
            }
            else
            {
                quociente++;
            }
        }
        cout<<"QUOCIENTE: " <<quociente <<", RESTO: "<<resto<<"\n";
    }
    
    return 0;
}