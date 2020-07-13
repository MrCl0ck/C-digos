//https://www.urionlinejudge.com.br/judge/pt/problems/view/1957
/*

*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long int val;
    string res = "";

    cin>>val;

    while(val>0){
        switch((val%16)){
            case 10:{
                res += "A";
                break;
            }
            case 11:{
                res += "B";
                break;
            }
            case 12:{
                res += "C";
                break;
            }
            case 13:{
                res += "D";
                break;
            }
            case 14:{
                res += "E";
                break;
            }
            case 15:{
                res += "F";
                break;
            }
            default: res += (val%16 +'0');//conversão bruta para o tipo char... para se converter de char pra int faz-se (-'0').
        }
        val = val/16;
    }

    reverse(res.begin(), res.end());

    cout<<res<<"\n";

	return 0;
}
