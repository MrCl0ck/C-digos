//https://www.urionlinejudge.com.br/judge/pt/problems/view/1158
#include <iostream>

using namespace std;

int main(){
    int N;

    cin>>N;

    for(int i=0, x,y, tot=0; i<N; ++i, tot=0){
        cin>>x>>y;
        for(int j=x, ii=0; ii<y ;++j){
            if(j%2 != 0){
                tot += j;
                ii++;
            }
        }
        cout<<tot<<"\n";
    }

	return 0;
}
