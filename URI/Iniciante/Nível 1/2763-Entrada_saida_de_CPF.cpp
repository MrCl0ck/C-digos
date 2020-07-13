#include <iostream>

using namespace std;

int main(){
    char p1[3][3], p2[2], ponto;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>p1[i][j];
        }
        cin>>ponto;
    }
    cin>>p2[0]>>p2[1];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<p1[i][j];
        }
        cout<<"\n";
    }
    cout<<p2[0]<<p2[1]<<"\n";
	return 0;
}