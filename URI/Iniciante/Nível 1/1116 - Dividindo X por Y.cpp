//https://www.urionlinejudge.com.br/judge/pt/problems/view/1116
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N;
    float x, y;
    cin>>N;

    for(int i=0; i <N ; ++i){
        cin>>x>>y;

        if(y!=0){
            cout<<fixed<<setprecision(1)<<x/y<<"\n";
        }
        else{
            cout<<"divisao impossivel\n";
        }
    }

	return 0;
}
