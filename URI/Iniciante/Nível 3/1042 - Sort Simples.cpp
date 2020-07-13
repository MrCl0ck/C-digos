//https://www.urionlinejudge.com.br/judge/pt/problems/view/1042
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v(3);
    int a,b,c;

    cin>>a>>b>>c;

    v[0] = a;
    v[1] = b;
    v[2] = c;

    sort(v.begin(), v.end());


    for(int i=0; i<3; ++i){
        cout<<v[i]<<"\n";
    }

    cout<<"\n";

    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";


	return 0;
}
