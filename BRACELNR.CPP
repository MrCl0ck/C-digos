#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string seq, f, rev_seq;

    cin>>n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cin>>seq>>f;

        f += f;//como a frase é circular, eu achei necessário dobrar a frase nela mesma, assim daria uma volta em si mesma
        rev_seq = seq;//a string reversa, inicialmente é igual a string original
        reverse(rev_seq.begin(), rev_seq.end());//reverte a string do começo ao fim.

        if(f.find(seq) != -1){//caso o número encontrado for diferente de -1 é pq a substring foi encontrada dentro da string e o índice do ínicio da substring foi retornado
            cout<<"S"<<"\n";
        }
        else if(f.find(rev_seq) != -1){//faz a mesma operação que a de cima, só que com a string reversa....
            cout<<"S"<<"\n";
        }
        else{
            cout<<"N"<<"\n";
        }
    }
    

    return 0;
}
