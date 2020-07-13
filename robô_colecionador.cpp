#include <iostream>
#include <cctype>

using namespace std;

char ret(char a, char m){
    if(a=='N'){
        if(m=='D'){
            a='L'; 
        }
        else if(m=='E'){
            a='O';
        }
    }
    else if(a=='S'){
        if(m=='D'){
            a='O'; 
        }
        else if(m=='E'){
            a='L'; 
        }
    }
    else if(a=='L'){
        if(m=='D'){
            a='S'; 
        }
        else if(m=='E'){
            a='N'; 
        }
    }
    else if(a=='O'){
        if(m=='D'){
            a='N'; 
        }
        else if(m=='E'){
            a='S'; 
        }
    }
    return a;
}

int res_hos(char t){
    if(t=='*'){
        return 1;
    }
    else if(t=='#'){
        return 0;
    }    
    return 2;
}

int main(){
    int n, m, s;

    while (cin>>n>>m>>s)
    {
        if(n==0&&m==0&&s==0)
        {
            break;
        }

        char matriz[n][m], orientacao=' ';
        int maq[100][100]={0};//ao fazer uma flag com matrizes, se colocar do tipo bool, inicialize todas elas, mas por precaução coloque int e inicialize com 0...
        int lin, col;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>matriz[i][j];

                if (isalpha(matriz[i][j]))
                {
                    orientacao = matriz[i][j];
                    lin=i;
                    col=j;
                }                
            }            
        }

        char movimento;
        int celulas=0;

        for (int i = 0; i < s; i++)
        {
            cin>>movimento;
            
            switch (movimento)
            {
                case 'D':{
                    orientacao=ret(orientacao,'D');
                    break;
                }
                case 'E':{   
                    orientacao=ret(orientacao,'E');
                    break;
                }
                case 'F':{
                    if (orientacao=='N'){
                        if(lin-1>=0){
                            lin = lin-1;
                            
                            int r = res_hos(matriz[lin][col]);

                            if(r==1 && maq[lin][col]==0)
                            {
                                celulas++;  
                                maq[lin][col]=1;
                            }
                            else if(r==0)
                            {
                                lin=lin+1;
                            }
                        }                        
                    }
                    else if (orientacao=='S')
                    {
                        if(lin+1<n){
                            lin = lin+1;
                            
                            int r = res_hos(matriz[lin][col]);

                            if(r==1 && maq[lin][col]==0)
                            {
                                celulas++;   
                                maq[lin][col]=1;   
                            }
                            else if(r==0)
                            {
                                lin=lin-1;
                            }
                        } 
                    }
                    else if (orientacao=='O')
                    {
                        if(col-1>=0){
                            col = col-1;
                            
                            int r = res_hos(matriz[lin][col]);
                            if(r==1 && maq[lin][col]==0)
                            {
                                celulas++; 
                                maq[lin][col]=1;     
                            }
                            else if(r==0)
                            {
                                col=col+1;
                            }
                        } 
                    }
                    else if (orientacao=='L')
                    {
                        if(col+1<m){
                            col = col+1;
                            
                            int r = res_hos(matriz[lin][col]);
                            if(r==1 && maq[lin][col]==0)
                            {
                                celulas++;   
                                maq[lin][col]=1;   
                            }
                            else if(r==0)
                            {
                                col=col-1;
                            }
                        }
                    }
                    break;
                }
            }
        }        
            
        cout<<celulas<<"\n";
    }         
    return 0;
}