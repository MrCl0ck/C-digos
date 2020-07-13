//https://www.urionlinejudge.com.br/judge/pt/problems/view/2006
#include <iostream>

using namespace std;

int main(){
    int t, a, b, c, d, e, tt=0;

    cin>>t>>a>>b>>c>>d>>e;

    if(a==t)
        tt++;
    if(b==t)
        tt++;
    if(c==t)
        tt++;
    if(d==t)
        tt++;
    if(e==t)
        tt++;

    cout<<tt<<"\n";

	return 0;
}
