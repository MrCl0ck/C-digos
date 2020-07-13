//https://www.urionlinejudge.com.br/judge/pt/problems/view/1239
/*
    Atalhos Bloggo
Por TopCoder*  EUA

Timelimit: 1
Voc� est� ajudando a desenvolver um sistema de gerenciamento de weblog chamado bloggo. Embora bloggo coloque todo o conte�do direto no website em HTML, nem todos autores apreciam usar tags HTML em seus textos. Para tornar a vida deles mais f�ceis, bloggo oferece uma sintaxe simples chamada atalhos para obter alguns efeitos textuais em HTML. Sua tarefa �, dado um documento escrito com atalhos, traduzi-lo para o HTML apropriado.


Um atalho � usado para colocar texto em it�lico. HTML faz isto com as tags <i> e </i>, mas no bloggo um autor pode simplesmente colocar um peda�o de texto entre dois caracteres de sublinhado, '_'. Portanto, onde um autor escreve

  You _should_ see the baby elephant at the zoo!

bloggo vai publicar o seguinte:

  You <i>should</i> see the baby elephant at the zoo!

Outro atalho serve para colocar texto em negrito, o que, em HTML, � feito com as tags <b> e </b>. Bloggo permite aos autores fazer o mesmo com pares do caractere asterisco, '*'. Quando um autor escreve o texto

  Move it from *Receiving* to *Accounts Payable*.

ele vai sair no website assim:

  Move it from <b>Receiving</b> to <b>Accounts Payable</b>.

Entrada
A entrada contem v�rios casos de teste. Cada caso de teste � composto por uma linha que contem uma string texto, com zero ou mais usos dos atalhos it�lico e negrito. Cada texto tem de 1 a 50 caracteres, inclusive. Os �nicos caracteres permitidos no texto s�o os caracteres alfab�ticos (de 'a' a 'z' e de 'A' a 'Z'), o sublinhado ('_'), o asterisco ('*'), o caractere de espa�o e os s�mbolos de pontua��o ',', ';', '.', '!', '?', '-', '(' e ')'. O caractere sublinhado '_' ocorre no texto um n�mero par de vezes. O asterisco '*' tamb�m aparece um n�mero par de vezes no texto. Nenhuma substring do texto entre um par de sublinhados ou entre um par de asteriscos pode conter outros sublinhados ou asteriscos, respectivamente.

Sa�da
Para cada linha de entrada seu programa deve gerar uma linha de sa�da com o texto traduzido para HTML como demonstrado nos exemplos abaixo. Para tornar it�lico um peda�o de texto no HTML, voc� deve iniciar este peda�o com a tag <i> e termin�-lo com a tag </i>. Para texto em negrito, inicie com <b> e termine com </b>.

O final da entrada � determinado por EOF.

Exemplo de Entrada
You _should_ see the new walrus at the zoo!
Move it from *Accounts Payable* to *Receiving*.
I saw _Chelydra serpentina_ in *Centennial Park*.
_ _ __ _ yabba dabba _ * dooooo * ****
_now_I_know_*my*_ABC_next_time_*sing*it_with_me

Exemplo de Sa�da
You <i>should</i> see the new walrus at the zoo!
Move it from <b>Accounts Payable</b> to <b>Receiving</b>.
I saw <i>Chelydra serpentina</i> in <b>Centennial Park</b>.
<i> </i> <i></i> <i> yabba dabba </i> <b> dooooo </b> <b></b><b></b>
<i>now</i>I<i>know</i><b>my</b><i>ABC</i>next<i>time</i><b>sing</b>it<i>with</i>me
*/
#include <iostream>

using namespace std;

int main(){
    string f, r;
    bool flag_i, flag_b;

    while(getline(cin,f)){
        flag_i = 0;
        flag_b = 0;
        r = "";
        for(int i=0; i<f.size(); ++i){
            if(f[i] != '_' && f[i] != '*'){
                r += f[i];
            }
            else if(f[i] == '_'){
                if(flag_i == 0){
                    r += "<i>";
                    flag_i = 1;
                }
                else{
                    r += "</i>";
                    flag_i = 0;
                }
            }
            else if(f[i] == '*'){
                if(flag_b == 0){
                    r += "<b>";
                    flag_b = 1;
                }
                else{
                    r += "</b>";
                    flag_b = 0;
                }
            }
        }
        cout<<r<<"\n";
    }

	return 0;
}
