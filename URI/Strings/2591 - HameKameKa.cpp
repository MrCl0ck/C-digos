#include <iostream>

using namespace std;

int main(){
    int casos;
    string poder;

    cin>>casos;

    for(int i=0; i <casos; ++i){
        cin>>poder;
        string power_a = "k"; int cont1 = 0, cont2 = 0;
        poder.erase()
        for(int j=0, k=0;j<poder.size();++j){
            if(poder[j] == 'h'){
                k = j+1;
                while(poder[k] == 'a'){
                    cont1++;
                    k++;
                }
                j=k;
            }
            else if(poder[j] == 'k'){
                k = j+1;
                while(poder[k] == 'a'){
                    cont2++;
                    k++;
                }
                j=k;
                break;
            }
        }

        for(int j=0;j<cont1*cont2;++j){
            power_a += "a";
        }

        cout<<power_a<<"\n";
    }

    return 0;
}
