#include <iostream>

using namespace std;

int main(){
    int n;
    string f;

    cin>>n;
    cin.ignore();
    
    for (int i = 0; i < n; i++)
    {
        getline(cin, f);
        cout<<"I am Toorg!\n";
    }
    

    return 0;
}