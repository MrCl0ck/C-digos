//https://www.urionlinejudge.com.br/judge/pt/problems/view/1041
#include <iostream>

using namespace std;

int main(){
    float x, y;

    cin>>x>>y;

    if(x>0&&y>0){//Q1
        cout<<"Q1"<<"\n";
    }
    else if(x>0&&y<0){//Q4
        cout<<"Q4"<<"\n";
    }
    else if(x<0&&y>0){//Q2
        cout<<"Q2"<<"\n";
    }
    else if(x<0&&y<0){//Q3
        cout<<"Q3"<<"\n";
    }
    else if(x==0&&(y<0 || y>0)){//eixo Y
        cout<<"Eixo Y"<<"\n";
    }
    else if(y==0&&(x<0 || x>0)){//eixo x
        cout<<"Eixo X"<<"\n";
    }
    else{
       cout<<"Origem"<<"\n";
    }


	return 0;
}
