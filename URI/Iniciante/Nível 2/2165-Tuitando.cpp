#include <iostream>

using namespace std;

int main(){
    string f;

    getline(cin, f);

    if(f.size()<=140){
        cout<<"TWEET"<<"\n";
    }
    else
    {
        cout<<"MUTE"<<"\n";
    }
    
    
	return 0;
}