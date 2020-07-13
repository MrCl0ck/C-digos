//https://www.urionlinejudge.com.br/judge/pt/problems/view/1045
#include <iostream>
#include <algorithm>

using namespace std;

bool comp(float a, float b){//ordena em ordem decrescente, do maior ao menor
    return a>b;
}

int main(){
    float v[3];

    cin>>v[0]>>v[1]>>v[2];

    sort(v, v+3, comp);

    if(v[0]>=(v[1]+v[2])){
        cout<<"NAO FORMA TRIANGULO\n";
    }
    else{
        if((v[0]*v[0])==(v[1]*v[1]+v[2]*v[2])){
           cout<<"TRIANGULO RETANGULO\n";
        }
        else if((v[0]*v[0])>(v[1]*v[1]+v[2]*v[2])){
           cout<<"TRIANGULO OBTUSANGULO\n";
        }
        else if((v[0]*v[0])<(v[1]*v[1]+v[2]*v[2])){
           cout<<"TRIANGULO ACUTANGULO\n";
        }

        if((v[0] == v[1])&& (v[1] == v[2])){
           cout<<"TRIANGULO EQUILATERO\n";
        }
        else if((v[0]==v[1])||(v[1]==v[2])||(v[2]==v[0])){
           cout<<"TRIANGULO ISOSCELES\n";
        }
    }

	return 0;
}
