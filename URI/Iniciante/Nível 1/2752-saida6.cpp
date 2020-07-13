#include <iostream>

using namespace std;

int main(){
    char p[50] = {"AMO FAZER EXERCICIO NO URI"};

    printf("<%s>\n",p);
    printf("<%30s>\n",p);
    printf("<%.20s>\n",p);
    printf("<%-20s>\n",p);
    printf("<%-30s>\n",p);
    printf("<%.30s>\n",p);
    printf("<%30.20s>\n",p);
    printf("<%-30.20s>\n",p);
    
	return 0;
}