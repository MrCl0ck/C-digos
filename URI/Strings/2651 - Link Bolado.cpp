//https://www.urionlinejudge.com.br/judge/pt/problems/view/2651
/*
    Link Bolado
Por Abner Samuel P. Palmeira, IFSULDEMINAS BR Brazil

Timelimit: 1
Link é um herói famoso e por isso recebe diversas cartas de seus fãs. Porém mesmo sendo famoso, todos continuam o chamando de Zelda.

Por causa disso Link está muito bolado, tão bolado que sempre que recebe uma carta ele confere como o seu fã se referiu a ele na carta, e caso ele perceba o trecho "zelda" no nome ele fica bolado e joga a carta fora.

Sua tarefa é determinar se Link ficará bolado com a forma que seu fã o chamou na carta ou não.

Entrada
Contém uma string S (1 ≤ |S| ≤ 105) que representa como o fã de Link se referiu a ele na carta. A string é composta apenas por letras maiúsculas e minúsculas.

Saída
Seu programa deve exibir "Link Bolado" caso o nome contenha o trecho "zelda" ou "Link Tranquilo" caso contrário.

Exemplos de Entrada 	Exemplos de Saída
zelda                   Link Bolado

zeldo                   Link Tranquilo

Zeldao                  Link Bolado
*/
#include <iostream>
#include <cctype>

using namespace std;

string tranf(string f){
    for(int i=0; i<f.size(); ++i){
        f[i] = tolower(f[i]);
    }
    return f;
}

int comp(string a){
    return a.find("zelda");
}

int main(){
    string g;

    getline(cin, g);

    int r = comp(tranf(g));

    if(r != -1){
        cout<<"Link Bolado"<<"\n";
    }
    else{
        cout<<"Link Tranquilo"<<"\n";
    }


	return 0;
}
