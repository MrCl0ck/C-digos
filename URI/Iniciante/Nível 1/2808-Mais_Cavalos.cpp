#include <iostream>

using namespace std;

int val_jog(char a, int x, char b, int y){
    if(b == char(a+1) || b == char(a-1)){
        if(x == y+2 || x== y-2){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(b == char(a+2) || b == char(a-2)){
        if(x == y+1 || x== y-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}

int main(){
    char a, b;
    int x, y;

    cin>>a>>x>>b>>y;

    int res = val_jog(a,x,b,y);

    if(res==1){
        cout<<"VALIDO"<<"\n";
    }
    else if(res == 0){
        cout<<"INVALIDO"<<"\n";
    }

    return 0;
}