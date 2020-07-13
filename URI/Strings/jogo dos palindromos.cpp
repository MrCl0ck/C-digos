#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
//caso de faltar divisor pro real x?



int32_t main(){

    fastio;
    string s;
    while(cin>>s){
        map<char,int> mapa;
        for(int i=0;i<(int)s.size();i++){
            mapa[s[i]]++;
        }
        int flag = true;
        int res=0;
        for(map<char,int>::iterator it = mapa.begin();it!=mapa.end();it++){
            if(it->second%2==1){
                if(flag){
                    flag = false;
                }else{
                    res++;
                }
            }

        }

        cout<<res<<endl;
    }

}
para ser palindromo (podendo permutar) basta que todos os digitos apareçam uma quantidade par de vezes
no caso, no maximo um digito pode aparecer uma quantidade impar de vezes
