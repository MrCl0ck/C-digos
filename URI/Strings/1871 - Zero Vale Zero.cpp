//text
#include <iostream>
#include <string>

using namespace std;

int main(){
    long long int a, b, s = 0;

    while(true){
        cin>>a>>b;

        if(a == 0 && b == 0){
            break;
        }
        s = a+b;
        string soma = "";

        soma = to_string(s);

        for(int i=0; i<soma.size(); ++i){
            if(soma[i] == '0'){
                soma.erase(i,i);
            }
        }

        cout<<soma<<"\n";
    }

	return 0;
}
