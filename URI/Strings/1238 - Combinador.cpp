#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, maior = 0;

    string frase1, frase2;

    cin>>n;

    for(int i=0;i<n;++i){
        cin>>frase1>>frase2;
        string resultante = "";
        for(int i=0,f1=0, f2=0; i<frase1.size()+frase2.size(); ++i){
            if(f1 < frase1.size() && f2 < frase2.size()){
                resultante += frase1[f1];
                f1++;
                resultante += frase2[f2];
                f2++;
            }
            else if(f1 >= frase1.size() && f2 < frase2.size()){
                resultante += frase2[f2];
                f2++;
            }
            else if(f1 < frase1.size() && f2 >= frase2.size()){
                resultante += frase1[f1];
                f1++;
            }
        }
        cout<<resultante<<"\n";

    }






    return 0;
}
