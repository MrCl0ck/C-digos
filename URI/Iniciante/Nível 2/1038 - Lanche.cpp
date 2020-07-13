//https://www.urionlinejudge.com.br/judge/pt/problems/view/1038
#include <iostream>
using namespace std;

int main(){
    int code, item;
    float vect[6] = {0, 4, 4.50, 5, 2, 1.50};

    cin>>code>>item;

    printf("Total: R$ %.2f\n",vect[code]*item);

	return 0;
}
