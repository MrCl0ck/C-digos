//https://www.urionlinejudge.com.br/judge/pt/problems/view/1049
#include <iostream>

using namespace std;

int main(){
    string tipo ="",  bixo="", come="";

    cin>>tipo>>bixo>>come;

    switch(tipo[0]){
        case 'v':{
            switch(bixo[0]){
                case 'a':{
                    switch(come[0]){
                        case 'c':{
                            cout<<"aguia"<<"\n";
                            break;
                        }
                        case 'o':{
                            cout<<"pomba"<<"\n";
                            break;
                        }
                    }
                    break;
                }
                case 'm':{
                    switch(come[0]){
                        case 'h':{
                            cout<<"vaca"<<"\n";
                            break;
                        }
                        case 'o':{
                            cout<<"homem"<<"\n";
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
        case 'i':{
            switch(bixo[0]){
                case 'i':{
                    switch(come[2]){
                        case 'm':{
                            cout<<"pulga"<<"\n";
                            break;
                        }
                        case 'r':{
                            cout<<"lagarta"<<"\n";
                            break;
                        }
                    }
                    break;
                }
                case 'a':{
                    switch(come[0]){
                        case 'h':{
                            cout<<"sanguessuga"<<"\n";
                            break;
                        }
                        case 'o':{
                            cout<<"minhoca"<<"\n";
                            break;
                        }
                    }
                    break;
                }
            }
            break;
        }
    }

	return 0;
}
