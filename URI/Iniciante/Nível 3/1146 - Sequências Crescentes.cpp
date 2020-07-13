//https://www.urionlinejudge.com.br/judge/pt/problems/view/1146
/*

*/
#include <iostream>

using namespace std;

int main(){
    int X;

    while(cin>>X && X){
        for(int i=1; i<=X; ++i){
            if(i!=X){
                cout<<i<<" ";
            }
            else{
                cout<<i<<"\n";
            }
        }
    }


	return 0;
}
