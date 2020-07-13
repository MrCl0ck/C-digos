//https://www.urionlinejudge.com.br/judge/pt/problems/view/1051
#include <iostream>
#include <iomanip>

using namespace std;

double res(double sal){
    double t=0;

    if(sal>4500){
        t+=(sal-4500)*0.28;
        sal=sal-(sal-4500);
    }
    if(sal>3000){
        t+=(sal-3000)*0.18;
        sal=sal-(sal-3000);
    }
    if(sal>2000){
        t+=(sal-2000)*0.08;
        sal=sal-(sal-2000);
    }

    return t;
}

int main(){
    double salary;

    cin>>salary;

    if(salary>2000){
        cout<<"R$ "<<fixed<<setprecision(2)<<res(salary)<<"\n";
    }
    else{
        cout<<"Isento\n";
    }

	return 0;
}
