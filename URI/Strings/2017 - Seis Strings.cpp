//text
#include <iostream>

using namespace std;

int main(){
    string x;
    string y;
    int k, id, r = 0;

    getline(cin, x);
    cin>>k;
    cin.ignore();
    r=k;

    for(int i=0; i<5; ++i){
        getline(cin, y);

        int cont = 0;

        for(int j=0;j<y.size();++j){
            if(x[j] != y[j])
                cont++;
        }

        if(cont<r){
            id = i+1;
            r = cont;
        }
    }

    if(r < k){
        cout<<id<<"\n";
        cout<<r<<"\n";
    }
    else{
        cout<<"-1"<<"\n";
    }

	return 0;
}
