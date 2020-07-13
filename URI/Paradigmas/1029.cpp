//ACCEPTED - 0.100 
/*
	for(int j = 1, P = X; j <= X-1; j++){
		   	z = x + y;
			x = y;
		   	y = z;
		   	if(P > -1){
				   
			}
		}
		cout<<z<<endl<<endl;
*/
#include <iostream>
using namespace std;
int contador = 0;

int fib(int n){
	contador++;	
	if(n < 2){
		return n;
	}
	else{
		return fib(n-1) + fib(n-2);
	}	
}

int main(int argc, char** argv)
{
	int casos_de_teste;
	int X;//;, x = 0, y = 1, z = 0;
	cin>>casos_de_teste;
	
	
	for(int i = 0; i < casos_de_teste; i++){
		cin>>X;
		int resultado = fib(X);
		cout<<"fib(" <<X <<") = " <<contador-1 <<" calls = " <<resultado <<endl;
		contador = 0;		
		//z=0; y = 1; x = 0;
	}
	
	return 0;
}