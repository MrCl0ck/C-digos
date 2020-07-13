//text
#include <iostream>

using namespace std;

int main(){
    int casos;

    string digitos_1, digitos_2;

    cin>>casos;

    for(int i=0;i<casos;++i){
        cin>>digitos_1>>digitos_2;

        if(digitos_2.size() <= digitos_1.size()){
            int k = digitos_1.size() - digitos_2.size();
            bool conf = 1;
            for(int j=0;j<digitos_2.size();++j, ++k){
                if(digitos_1[k] != digitos_2[j]){
                    conf = 0;
                    break;
                }
            }

            if(conf == 1){
                cout<<"encaixa"<<"\n";
            }
            else if(conf == 0){
                cout<<"nao encaixa"<<"\n";
            }
        }
        else{
            cout<<"nao encaixa"<<"\n";
        }
    }

	return 0;
}
