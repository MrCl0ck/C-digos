#include <iostream>

using namespace std;

int main(){
    int h1, m1, h2, m2;

    while (cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }

        if(h1>h2)
        {
            h1=(h2+24)-h1;
            if (m1>m2)
            {
                m1=(m2+60)-m1;
                h1--;
            }
            else if (m2>m1)
            {
                m1=m2-m1;
            }
            else{
                m1=m2-m1;
            }          
        }
        else if (h2>h1)
        {
            h1=h2-h1;
            if (m1>m2)
            {
                m1=(m2+60)-m1;
                h1--;
            }
            else if (m2>m1)
            {
                m1=m2-m1;
            }
            else{
                m1=m2-m1;
            }      
        }
        else{
            if (m1>m2)
            {
                m1=(m2+60)-m1;
                h1=(h2+23)-h1;
            }
            else if (m2>m1)
            {
                m1=m2-m1;
                h1=h2-h1;
            }
            else{
                m1=m2-m1;
                h1=h2-h1;
            } 
        }

        int m = h1*60+m1;
        cout<<m<<"\n";
        
    }
    
    return 0;
}