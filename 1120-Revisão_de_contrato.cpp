//tempo -> 0.004s
#include <iostream>

using namespace std;

int main(){
    char digito;
    string f;
    string res="";

    while(cin>>digito>>f && (f[0]!='0' && digito != '0')){
        for (int i = 0; i < f.size(); i++)
        {
            if(f[i]==digito){
                f.erase(f.begin()+i);
                i=i-1;
            }
        }        
        
        
        for (int i = 0; i < f.size(); i++)
        {
            if (f[i]=='0')
            {
                f.erase(f.begin()+i);
                i=i-1;
            }
            else{
                break;
            }
            
        }        

        if(f==""){
            res+="0\n";
        }
        else{
            res+=f+"\n";
        }   
    }

    cout<<res;

 
    return 0;
}

/* tempo -> 0.008s
#include <iostream>

using namespace std;

int main(){
    char digito;
    string f;
    
    while(cin>>digito>>f && (f[0]!='0' && digito != '0')){
        for (int i = 0; i < f.size(); i++)
        {
            if(f[i]==digito){
                f.erase(f.begin()+i);
                i=i-1;
            }
        }        
        
        
        for (int i = 0; i < f.size(); i++)
        {
            if (f[i]=='0')
            {
                f.erase(f.begin()+i);
                i=i-1;
            }
            else{
                break;
            }
            
        }        

        if(f==""){
           cout<<"0\n";
        }
        else{
            cout<<f<<"\n";
        }   
    }
 
    return 0;
}



 */