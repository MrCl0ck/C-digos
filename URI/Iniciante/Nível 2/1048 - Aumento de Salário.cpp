//https://www.urionlinejudge.com.br/judge/pt/problems/view/1048
#include <iostream>

using namespace std;

int main(){
    double salary;

    cin>>salary;

    if(salary>2000){
        printf("Novo salario: %.2f\n", salary*1.04);
        printf("Reajuste ganho: %.2f\n", salary*0.04);
        cout<<"Em percentual: " <<4 <<" %\n";
    }
    else if(salary>1200){
        printf("Novo salario: %.2f\n", salary*1.07);
        printf("Reajuste ganho: %.2f\n", salary*0.07);
        cout<<"Em percentual: " <<7 <<" %\n";
    }
    else if(salary>800){
        printf("Novo salario: %.2f\n", salary*1.1);
        printf("Reajuste ganho: %.2f\n", salary*0.10);
        cout<<"Em percentual: " <<10 <<" %\n";
    }
    else if(salary>400){
        printf("Novo salario: %.2f\n", salary*1.12);
        printf("Reajuste ganho: %.2f\n", salary*0.12);
        cout<<"Em percentual: " <<12 <<" %\n";
    }
    else{
        printf("Novo salario: %.2f\n", salary*1.15);
        printf("Reajuste ganho: %.2f\n", salary*0.15);
        cout<<"Em percentual: " <<15 <<" %\n";
    }


	return 0;
}
