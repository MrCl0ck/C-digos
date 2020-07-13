//https://www.urionlinejudge.com.br/judge/pt/problems/view/2691
#include <iostream>

using namespace std;

int main(){
    int casos;

    long long int x,y;
    char b;

    cin>>casos;

    for(int i=0; i < casos; ++i){
        cin>>x>>b>>y;

        for(int k=5; k <=10 ; ++k){
            if(x != y){
                cout<<x <<" x " <<k <<" = " <<x*k <<" && " <<y <<" x " <<k <<" = " <<y*k <<"\n";
            }
            else{
                cout<<x <<" x " <<k <<" = " <<x*k <<"\n";
            }
        }
    }

	return 0;
}
