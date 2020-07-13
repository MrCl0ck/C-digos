#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    while (cin>>n && n)
    {
        string f[n];
        set< string > s;

        for (int i = 0; i < n; i++)
        {
            cin>>f[i];

            sort(f[i].begin(), f[i].end());//ORDENA A FRASE ATUAL
            s.insert(f[i]);//INSERE O ELEMENTO, MAS SE O ELEMENTO JÁ ESTIVER NA ESTRUTURA ELE NÃO É INSERIDO
        }

        cout<<s.size()<<"\n";//MOSTRA O NÚMERO DE ELEMENTO INSERIDOS NO SET            
    }


    return 0;
}
