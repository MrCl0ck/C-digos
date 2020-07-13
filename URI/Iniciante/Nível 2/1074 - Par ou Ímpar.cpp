//https://www.urionlinejudge.com.br/judge/pt/problems/view/1074
#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i=0,x; i<n ;++i){
        cin>>x;

        if(x!=0){
            if(x%2==0){
                cout<<"EVEN ";
            }
            else{
                cout<<"ODD ";
            }

            if(x>0){
                cout<<"POSITIVE\n";
            }
            else if(x<0){
                cout<<"NEGATIVE\n";
            }
        }
        else{
            cout<<"NULL\n";
        }
    }

	return 0;
}
