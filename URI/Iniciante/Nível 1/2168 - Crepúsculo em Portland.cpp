//https://www.urionlinejudge.com.br/judge/pt/problems/view/2168
#include <iostream>

using namespace std;

int main(){
    int n;
    int v[100+1][100+1] = {0};

    cin>>n;

    for(int i=0; i<n+1; ++i){
        for(int j=0; j<n+1; ++j){
            cin>>v[i][j];
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if((v[i][j]==1 && v[i][j+1]==1)||(v[i][j]==1 && v[i+1][j]==1)||(v[i][j]==1 && v[i+1][j+1]==1)){//1 e 2, 1 e 3, 1 e 4;
                cout<<"S";
            }
            else if((v[i][j+1]==1 && v[i+1][j+1]==1)||(v[i][j+1]==1 && v[i+1][j]==1)){//2 e 3, 2 e 4
                cout<<"S";
            }
            else if((v[i+1][j]==1 && v[i+1][j+1]==1)){//3 e 4
                cout<<"S";
            }
            else{// nenhum dos...
                cout<<"U";
            }
        }
        cout<<"\n";

    }


	return 0;
}
