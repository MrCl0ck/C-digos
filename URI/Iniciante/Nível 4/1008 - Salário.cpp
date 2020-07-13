//https://www.urionlinejudge.com.br/judge/pt/problems/view/1008
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num, hours;
    double salary;

    cin>>num>>hours>>salary;

    cout<<"NUMBER = "<<num<<"\n";
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary*hours<<"\n";

	return 0;
}
