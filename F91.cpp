#include <iostream>

using namespace std;

int64_t f91(int64_t X){
    if(X>=101)
    {
        return X - 10;
    }

    return f91(f91(X + 11));
}

int main(){
    int64_t num;

    while (cin>>num && num)
    {
        cout<<"f91("<<num<<") = "<<f91(num)<<"\n";
    }    
    
    return 0;
}