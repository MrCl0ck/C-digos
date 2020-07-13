//https://www.urionlinejudge.com.br/judge/pt/problems/view/2702
#include <iostream>

using namespace std;

int main(){
    int Ca, Ba, Pa, Cr, Br, Pr, tot=0;

    cin>>Ca>>Ba>>Pa;
    cin>>Cr>>Br>>Pr;

    Ca = Cr-Ca;
    Ba = Br-Ba;
    Pa = Pr-Pa;

    if(Ca>0){
        tot+=Ca;
    }
    if(Ba>0){
        tot+=Ba;
    }
    if(Pa>0){
        tot+=Pa;
    }

    cout<<tot<<"\n";

	return 0;
}
