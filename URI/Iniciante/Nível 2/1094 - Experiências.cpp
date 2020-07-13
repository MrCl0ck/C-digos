//https://www.urionlinejudge.com.br/judge/pt/problems/view/1094
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N;
    double tc=0.0, ts=0.0, tr=0.0;
    char C;

    cin>>N;

    for(int i=0, x; i<N; ++i){
        cin>>x>>C;

        if(C == 'C'){
            tc+=x;
        }
        else if(C == 'R'){
            tr+=x;
        }
        else if(C == 'S'){
            ts+=x;
        }
    }

    int T = tc+tr+ts;
    cout<<"Total: "<<T<<" cobaias\n";
    cout<<"Total de coelhos: "<<tc<<"\n";
    cout<<"Total de ratos: "<<tr<<"\n";
    cout<<"Total de sapos: "<<ts<<"\n";
    tc = (tc*100.00)/double(T);
    tr = (tr*100.00)/double(T);
    ts = (ts*100.00)/double(T);
    printf("Percentual de coelhos: %.2lf %%\n",tc);
    printf("Percentual de ratos: %.2lf %%\n",tr);
    printf("Percentual de sapos: %.2lf %%\n",ts);

	return 0;
}
