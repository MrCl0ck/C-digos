//https://www.urionlinejudge.com.br/judge/pt/problems/view/1248
#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    string dieta, cafe, almoco, janta = "";
    cin>>N;
    cin.ignore();
    for(int i=0;i<N;++i){
        cin>>dieta>>cafe>>almoco;

        for(int j=0; j<cafe.size(); ++j){
            dieta.erase(dieta.find(cafe[j]));
            cout<<dieta<<"\n";
        }

        for(int j=0; j<almoco.size(); ++j){
            dieta.erase(dieta.find(almoco[j]));
        }

        cout<<dieta<<"\n";

    }

	return 0;
}
