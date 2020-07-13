//https://www.urionlinejudge.com.br/judge/pt/problems/view/1040
#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, n4, n_final, m;

    cin>>n1>>n2>>n3>>n4;

    m = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    printf("Media: %.1f\n",m);

    if(m>=7){
        cout<<"Aluno aprovado."<<"\n";
    }
    else if(m>=5){
        cout<<"Aluno em exame."<<"\n";
        cin>>n_final;
        printf("Nota do exame: %.1f\n", n_final);
        if(n_final>=5){
            cout<<"Aluno aprovado."<<"\n";
        }
        else{
            cout<<"Aluno reprovado."<<"\n";
        }
        printf("Media final: %.1f\n",(m+n_final)/2);

    }
    else{
        cout<<"Aluno reprovado."<<"\n";
    }


	return 0;
}
