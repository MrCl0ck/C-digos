//https://www.urionlinejudge.com.br/judge/pt/problems/view/2483
#include <iostream>

using namespace std;

int main(){
    int I;
    string natal = "Feliz nat";

    cin>>I;

    for(int i=0; i<I; ++i){
        natal += "a";
    }

    natal += "l!";

    cout<<natal<<"\n";

	return 0;
}
