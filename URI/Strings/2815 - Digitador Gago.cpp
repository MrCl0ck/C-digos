//text
#include <iostream>

using namespace std;

int main(){
    string frase;

    getline(cin, frase);

    for(int i=0; i<frase.size() ; ++i){
        if(i == 0){
            if(frase[i] == frase[i+2]){
                frase.erase(i,2);
            }
        }
        else{
            if(frase[i] == ' ' &&(frase[i+1] == frase[(i+1)+2])&&frase[i+4]!=' '){
                frase.erase(i+1,2);
            }
        }
    }

    cout<<frase<<"\n";

	return 0;
}
