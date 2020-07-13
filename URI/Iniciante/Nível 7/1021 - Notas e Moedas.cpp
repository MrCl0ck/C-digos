//https://www.urionlinejudge.com.br/judge/pt/problems/view/1021
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float value;
    int bank_note[6] = {2,5,10,20,50,100};
    float coin[6] = {0.01,0.05,0.10,0.25,0.50,1.00};

    cin>>value;
    value +=0.001;//acrescenta-se +1 milesimo de centavo na variável, pois o c++ não faz contagem com valores muito baixos...
    cout<<"NOTAS:"<<"\n";
    for(int i=5, j=0; i>=0; i+=0){
        if(bank_note[i]<=value){
            value -= bank_note[i];
            j++;
            continue;
        }
        cout<<j<<" nota(s) de R$ "<<bank_note[i]<<".00"<<"\n";
        j=0;
        i--;
    }

    cout<<"MOEDAS:"<<"\n";
    for(int i=5, j=0; i>=0; i+=0){
        if(coin[i]<=value){
            value -= coin[i];
            j++;
            continue;
        }
        cout<<j<<" moeda(s) de R$ "<<fixed<<setprecision(2)<<coin[i]<<"\n";
        j=0;
        i--;
    }


	return 0;
}
