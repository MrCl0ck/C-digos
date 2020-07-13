//text
#include <iostream>

using namespace std;

int main(){
    int casos;
    string matricula;

    cin>>casos;

    for(int i=0; i < casos; ++i){
        cin>>matricula;

        string num = "";

        if(matricula.size() == 20){
            if(matricula[0] == 'R' && matricula[1] == 'A'){
                for(int j=2;j<20;++j){
                    if(num == ""){
                        if(matricula[j] != '0'){
                            num += matricula[j];
                        }
                    }
                    else{
                        num += matricula[j];
                    }
                }
                if(num != ""){
                    cout<<num<<"\n";
                }
                else{
                   cout<<"INVALID DATA"<<"\n";
                }
            }
            else{
               cout<<"INVALID DATA"<<"\n";
            }
        }
        else{
            cout<<"INVALID DATA"<<"\n";
        }
    }

	return 0;
}
