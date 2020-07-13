#include <iostream>
#include <complex>

using namespace std;

int main(){
    int casos;
    string primeira, segunda;

    cin>>casos;

    //cout<<char('a') <<" " <<int('a')<<", "<<char('k') <<" " <<int('k')<<"\n";
    for(int i=0;i<casos;++i){
        cin>>primeira>>segunda;

        int diferenca = 0, total = 0;
        for(int j=0; j<primeira.size(); ++j){
            diferenca = int(primeira[j]) - int(segunda[j]);
            if(diferenca > 0){
                total += int('z') - int(primeira[j]) +  int(segunda[j]) - int('a') + 1;
            }
            else{
                total += fabs(diferenca);
            }
         }
         cout<<total<<"\n";
    }

    return 0;
}
