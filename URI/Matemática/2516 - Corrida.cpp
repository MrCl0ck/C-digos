/*URI Online Judge | 2516
Corrida
Por Ricardo Oliveira, UFPR BR Brazil

Timelimit: 1
Para entrar em forma para o próximo verão, você e seu amigo decidiram correr todas as manhãs na rua da universidade. Geralmente vocês correm juntos, mas, na corrida de hoje, seu amigo começou a correr um mais cedo e, por isso, está um pouco mais à frente de você.

Neste momento, seu amigo está a S metros de distância de você. Você está correndo a uma velocidade constante de va metros por segundo, e seu amigo está correndo a uma velocidade constante de vb metros por segundo. A figura abaixo ilustra a situação:



Sua tarefa é determinar se você irá alcançar seu amigo, e, em caso positivo, em quantos segundos isto irá acontecer.

Entrada
A entrada contém vários casos de teste. A única linha de cada caso contém três inteiros S, va e vb (1 ≤ S, va, vb ≤ 103), a distância atual para seu amigo (em metros), sua velocidade (em metros por segundo) e a velocidade de seu amigo (em metros por segundo), respectivamente.

A entrada termina com fim-de-arquivo (EOF).

Saída
Para cada caso de teste, se não é possível alcançar seu amigo, imprima uma linha contendo “impossivel” (sem aspas). Caso contrário, imprima uma linha contendo o tempo decorrido, em segundos, até que você alcance seu amigo. Arredonde e imprima a resposta com exatamente duas casas decimais.

Exemplo de Entrada
1 2 1
2 3 4

Exemplo de Saída
1.00
impossivel

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int distancia, vc, amigo;
    float segundos;

    while(cin>>distancia>>vc>>amigo){
        if(vc <= amigo){
            cout<<"impossivel"<<"\n";
        }
        else if(vc > amigo){
            segundos = (float)distancia/((float)vc-(float)amigo);
            cout<<setprecision(2)<<fixed;
            cout<<segundos<<"\n";
        }
    }

    return 0;
}
