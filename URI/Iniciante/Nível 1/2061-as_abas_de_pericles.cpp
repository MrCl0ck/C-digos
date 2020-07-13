#include <iostream>
using namespace std;

int main()
{
    int n, m;
    string s;

    cin>>n>>m;
    cin.ignore();

    for (int i = 0; i < m; i++)
    {
        cin>>s;

        if (s == "fechou")
        {
            n--;
            n+=2;
        }
        else
        {
            n--;
        }
    }

    cout<<n<<"\n";
    

    return 0;
}