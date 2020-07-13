//https://www.urionlinejudge.com.br/judge/pt/problems/view/1131
#include <iostream>

using namespace std;

int main(){
    int g=0, i=0, emp=0, gre=0;
    int x, y, z;

    do{
        cin>>x>>y;
        if(x>y){
            i++;
        }
        else if(x<y){
            g++;
        }
        else{
            emp++;
        }

        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>z;
        gre++;
    }while(z != 2);

    cout<<gre<<" grenais\n";
    cout<<"Inter:"<<i<<"\n";
    cout<<"Gremio:"<<g<<"\n";
    cout<<"Empates:"<<emp<<"\n";

    if(g>i){
        cout<<"Gremio venceu mais\n";
    }
    else if(i>g){
        cout<<"Inter venceu mais\n";
    }
    else{
        cout<<"Nao houve vencedor\n";
    }


	return 0;
}
