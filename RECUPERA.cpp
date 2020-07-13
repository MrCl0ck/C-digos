#include <iostream>
using namespace std;

int main(){
    int N, s=1;

    while(cin>>N)
    {
        int flag = 0, ss=0, vetor[100]={0};//lembrar de não declarar vetor com variáveis e instancialas com valores fixos, é Compilation Error certo....
        for (int i = 0,t=0,x; i < N; i++)
        {
            cin>>x;

            if(t==x && flag==0){
                flag=1;
                ss=t;
            }
            else
            {
                t+=x;
            }
            
        }

        cout<<"Instancia "<<s<<"\n";
        if(flag==0){
            cout<<"nao achei\n\n";
        }
        else if(flag==1){
            cout<<ss<<"\n\n";
        }

        s++;
    }

    return 0;
}