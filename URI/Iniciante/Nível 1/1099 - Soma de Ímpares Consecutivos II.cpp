//https://www.urionlinejudge.com.br/judge/pt/problems/view/1099
#include <iostream>

using namespace std;

int resp(int x, int y){
    int res = 0;
    if(x>=y){
        for(int i=y+1; i<x ; ++i){
            if(i%2!=0)
                res+=i;

        }
    }
    else{
        for(int i=x+1; i<y ; ++i){
            if(i%2!=0)
                res+=i;
        }
    }

    return res;
}


int main(){
    int n;
    int x, y;

    cin>>n;

    for(int i = 0, res = 0; i<n ; ++i, res = 0){
        cin>>x>>y;

        cout<<resp(x, y)<<"\n";
    }

	return 0;
}
