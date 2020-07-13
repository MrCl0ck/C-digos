//https://www.urionlinejudge.com.br/judge/pt/problems/view/1043
#include <iostream>

using namespace std;

int main(){
    double A,C,B, area;

    cin>>A>>B>>C;

    area = ((A+B)*C)/2;

    if(A<(B+C) && B<(A+C) && C<(A+B)){
        printf("Perimetro = %.1f\n", A+B+C);
    }
    else{
        printf("Area = %.1f\n", area);
    }

	return 0;
}
