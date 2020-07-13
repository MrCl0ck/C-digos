#include <iostream>
using namespace std;

int main(){
    string frase;

    while(getline(cin, frase)){
        for(int i=0, diferenca = 0; i<frase.size(); ++i){
            if(frase[i] >= 'A' && frase[i] <= 'Z'){
                diferenca = int('Z') - int(frase[i]);
                if(diferenca >= 13){
                    frase[i] = char(frase[i]+13);
                }
                else{
                    frase[i] = char('A'+12-diferenca);
                }
            }
            else if(frase[i] >= 'a' && frase[i] <= 'z'){
                diferenca = int('z') - int(frase[i]);
                if(diferenca >= 13){
                    frase[i] = char(frase[i]+13);
                }
                else{
                    frase[i] = char('a'+12-diferenca);
                }
            }
        }
        cout<<frase<<endl;

    }
    return 0;
}
