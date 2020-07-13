#include <iostream>

using namespace std;

int main(){
    int cost, t = 0;

    cin>>cost;

    if(cost>100){
        t += (cost-100)*5;
        cost = cost - (cost-100);
    }
    if(cost>30){
        t += (cost-30)*2;
        cost = cost - (cost-30);
    }
    if(cost>10){
        t += (cost-10)*1;
        cost = cost - (cost-10);
    }
    if(cost>=0){
        t += 7;
    }

    cout<<t<<"\n";

    return 0;
}