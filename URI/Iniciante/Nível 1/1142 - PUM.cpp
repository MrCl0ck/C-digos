//https://www.urionlinejudge.com.br/judge/pt/problems/view/1142
#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i=1, j=1, k=0; k<n; k+=0){
        if(j<3){
            cout<<i<<" ";
            i++;
            j++;
        }
        else{
            cout<<i<<" PUM\n";
            i += 2;
            j=1;
            k++;
        }
    }

	return 0;
}
