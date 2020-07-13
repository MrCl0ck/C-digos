//https://www.urionlinejudge.com.br/judge/pt/problems/view/2057
#include <iostream>

using namespace std;

int main(){
    int s,t,f,sum=0;

    cin>>s>>t>>f;

    sum = s+t+f;

    if(sum==24){
        cout<<0<<"\n";
    }
    else if(sum>24){
        cout<<sum-24<<"\n";
    }
    else if(sum<0){
        cout<<24+sum<<"\n";
    }
    else{
        cout<<sum<<"\n";
    }

	return 0;
}
