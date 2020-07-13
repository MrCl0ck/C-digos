//https://www.urionlinejudge.com.br/judge/pt/problems/view/2062
/*

*/
#include <iostream>

using namespace std;

int main(){
    int N;
    string frase, res = "";

    cin>>N;

    for(int i=0;i<N;++i){
        cin>>frase;

        if(frase.size() == 3){
            if(frase[0] == 'O' && frase[1] == 'B'){
                frase[2] = 'I';
            }
            else if(frase[0] == 'U' && frase[1] == 'R'){
                frase[2] = 'I';
            }
        }
        res += (frase+" ");
    }
    res.erase(res.size()-1);

    cout<<res<<"\n";

	return 0;
}
