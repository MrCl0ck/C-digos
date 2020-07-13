#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string palavra, frase;
    int valor;

    while (cin>>palavra>>valor)
    {
        cin.ignore();
        getline(cin, frase);
    
        for (int i = 0; i < frase.size(); i++)
        {
            if(frase[i] == '<')
            {
                i++;
                while (frase[i] != '>')
                {
                    frase[i] = tolower(frase[i]);
                    i++;
                }                   
            }
        }

        int i = 0;
        int res = frase.find(palavra, i);
        transform(palavra.begin(), palavra.end(), palavra.begin(), tolower);

        while (res != -1)
        {
            frase.replace(res)
        }
        
        
    }
    

    return 0;
}
