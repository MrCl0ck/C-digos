//text
#include <iostream>

using namespace std;

int main(){
    int N;
    string f;

    cin>>N;
    cin.ignore();
    for(int i=0; i<N; ++i){
        getline(cin, f);

        string copia = "";
        int tam = f.size()-1;

        for(int j=0, at_mid = tam/2, at_end = tam; j<=tam; ++j){
            if(j<=tam/2){
                copia += f[at_mid];
                at_mid--;
            }
            else{
                copia += f[at_end];
                at_end--;
            }
        }

        cout<<copia<<"\n";
    }

	return 0;
}
