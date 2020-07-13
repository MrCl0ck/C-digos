#include <iostream>

using namespace std;

int main(){
    int n, t;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>t;

        t=2015-t;

        if (t<=0)
        {
            t = (t*-1) + 1;
            cout<<t<<" A.C.\n";
        }
        else{
            cout<<t<<" D.C.\n";
        }
        
    }
    
	return 0;
}