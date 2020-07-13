//tempo -> 0.076s
#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    while (cin>>a>>b>>c)
    {
        if(a==b && b==c){
            cout<<"*\n";        
        }
        else
        {
            if(a==b){
                cout<<"C\n";
                continue;
            }
            if(a==c){
                cout<<"B\n";
                continue;
            }
            if(c==b){
                cout<<"A\n";
                continue;
            }            
        }    
    }
    
    return 0;
}

//tempo->0.060s
#include <iostream>

using namespace std;

int main(){
    int a, b, c, x;

    while (cin>>a>>b>>c)
    {
        x=(a*100)+(b*10)+(c);
        if(x == 0 || x == 111){
            cout<<"*\n";
        }
        else{
            if (x==11 || x==100)
            {
                cout<<"A\n";
            }
            else if (x==101 || x==10)
            {
                cout<<"B\n";
            }
            else
            {
                cout<<"C\n";
            }
        }
    }
    
    return 0;
}

//tempo->0.040s
#include <iostream>

using namespace std;

int main(){
    int a, b, c, x;

    while (cin>>a>>b>>c)
    {
        x=(a*100)+(b*10)+(c);

        if(x == 0 || x == 111){
            cout<<"*\n";
        }
        else if (x==11 || x==100)
        {
            cout<<"A\n";
        }
        else if (x==101 || x==10)
        {
            cout<<"B\n";
        }
        else
        {
            cout<<"C\n";
        }        
    }
    
    return 0;
}