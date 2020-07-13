#include <iostream>
using namespace std;

int main(){
    long long int litros, raio;
    float volume;

    cin>>raio>>litros;

    volume = (1.333333333333333)*(3.1415*(raio*raio*raio));

    cout<<(int)litros/(int)volume<<"\n";

    return 0;
}
