#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    int p[n], flag=0, pos=0;
    p[0]=-1;


    for (int i = 1; i <= n; i++)
    {
        cin>>p[i];

        if(p[i]<p[i-1]&&flag==0){
            pos=i;
            flag=1;
        }
    }

    cout<<pos<<"\n";
    
    
	return 0;
}