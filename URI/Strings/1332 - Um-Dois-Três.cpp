//text
#include <iostream>

using namespace std;

int main(){
    int casos;
    string numero;

    cin>>casos;

    for(int i=0; i < casos; ++i){
        cin>>numero;

        if(numero.size() == 3){
            int cont_1 = 0, cont_2 = 0;
            if(numero[0] == 'o'){
                cont_1++;
            }
            if(numero[1] == 'n'){
                cont_1++;
            }
            if(numero[2] == 'e'){
                cont_1++;
            }

            if(cont_1 < 2){
                cout<<2<<"\n";
                continue;
            }

            if(numero[0] == 't'){
                cont_2++;
            }
            if(numero[1] == 'w'){
                cont_2++;
            }
            if(numero[2] == 'o'){
                cont_2++;
            }

            if(cont_2 < 2){
                cout<<1<<"\n";
            }
        }
        else{
            cout<<3<<"\n";
        }
    }


	return 0;
}
