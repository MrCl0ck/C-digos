#include <iostream>

using namespace std;

int main(){
    int tam;

    while (cin>>tam && tam)
    {
        int m[100][100]={0};
        int p=0, q=0, s=tam;
        while(s>0)
        {
            for (int i=p; i < s; i++)
            {
                for (int j=q; j < s; j++)
                {
                    m[i][j] += 1;
                }
            }

            if(s-2>0){
                s -= 1;
                p++;
                q++;
            }
            else{
                break;
            }
        }
        for (int i=0; i < tam; i++)
        {
            for (int j = 0; j < tam; j++)
            {
                if(j==0){
                    cout<<"  "<<m[i][j];
                }
                else
                {
                    printf("%4d",m[i][j]);
                }
                
            }
            cout<<"\n";
        }
        cout<<"\n";
    }  
    cout<<"\n";
        
    return 0;
}