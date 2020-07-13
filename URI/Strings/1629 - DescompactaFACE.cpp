//https://www.urionlinejudge.com.br/judge/pt/problems/view/1629
#include <iostream>

using namespace std;

int main(){
    int N;
    string numero;

    while(true){
        cin>>N;

        if(N == 0)
            break;

        string bin = "";

        for(int i=0; i<N ; ++i){
            cin>>numero;

            int zero = 0, um = 0, total = 0;
            string z, u, t;

            for(int j=0; j < numero.size(); ++j){
                if(j%2 == 0){
                    zero += (numero[j] - '0');
                }
                else{
                    um += (numero[j] - '0');
                }
            }

            z = to_string(zero);
            u = to_string(um);
            t = z+u;

            for(int j=0; j < t.size(); ++j){
                total += (t[j] - '0');
            }
            cout<<total<<"\n";
        }
    }

	return 0;
}
