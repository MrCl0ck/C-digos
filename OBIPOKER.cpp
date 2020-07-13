#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;

    cin>>n;

    for (int i = 0, s=1; i < n; i++, s++)
    {
        int v[14] = {0}, pont=0, c=0, maior=0, pos=0;

        for (int j = 0, x; j < 5; j++)
        {
            cin>>x;

            v[x]++;
        }

        for (int j = 1; j <= 13; j++)
            {
                if(v[j]!=0){
                    c++;
                }
            }
        
        if(c==2){
            for (int j = 1; j <= 13; j++)
            {
                if(maior<v[j]){
                    maior=v[j];
                    pos=j;
                }
            }

            if(maior==4){
                pont=180+pos;
            }
            else{
                pont=160+pos;
            }
        }
        else if (c==3){
            int x, y;
            for (int j = 1; j <= 13; j++)
            {
                if(maior<v[j]){
                    maior=v[j];
                    x=j;
                }
                else if(maior<=v[j]){
                    maior=v[j];
                    y=j;
                }
            }

            if (maior==3)
            {
                pont=140+x;   
            }
            else{
                if(x>y){
                    pont=3*x+2*y+20;
                }
                else{
                    pont=3*y+2*x+20;
                }
            }
        }
        else if (c==4){
           int x;
           for (int j = 1; j <= 13; j++)
            {
                if(maior<v[j]){
                    maior=v[j];
                    x=j;
                }
            }

            pont=x; 
        }
        else if (c==5){
            int cont=0;
            for (int j = 1; j <= 13; j++)
            {
                if(v[j]!=0){
                    pos=j;
                    cont++;
                    if(v[j+1]!=0)
                        cont++;
                    if(v[j+2]!=0)
                        cont++;
                    if(v[j+3]!=0)
                        cont++;
                    if(v[j+4]!=0)
                        cont++;
                    break;
                }
            }
            if(cont==5){
                pont=200+pos;
            }
        }
              
        cout<<"Teste "<<s<<"\n";
        cout<<pont<<"\n\n";
    }
    
    
    return 0;
}