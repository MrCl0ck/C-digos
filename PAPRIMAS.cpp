#include <iostream>
using namespace std;

int64_t eh_primo(int64_t X){
    for (int64_t i = 2; i*i <= X; i++)
    {
        if(X%i==0)
        {
            return 0; 
            break;
        }
    }
    return 1;
}

int converter_to_int(char c){
    switch (c)
    {
        case 'a':{
            return 1;
            break;
        }
        case 'b':{
            return 2;
            break;
        }
        case 'c':{
            return 3;
            break;
        }
        case 'd':{
            return 4;
            break;
        }
        case 'e':{
            return 5;
            break;
        }
        case 'f':{
            return 6;
            break;
        }
        case 'g':{
            return 7;
            break;
        }
        case 'h':{
            return 8;
            break;
        }
        case 'i':{
            return 9;
            break;
        }
        case 'j':{
            return 10;
            break;
        }
        case 'k':{
            return 11;
            break;
        }
        case 'l':{
            return 12;
            break;
        }
        case 'm':{
            return 13;
            break;
        }
        case 'n':{
            return 14;
            break;
        }
        case 'o':{
            return 15;
            break;
        }
        case 'p':{
            return 16;
            break;
        }
        case 'q':{
            return 17;
            break;
        }
        case 'r':{
            return 18;
            break;
        }
        case 's':{
            return 19;
            break;
        }
        case 't':{
            return 20;
            break;
        }
        case 'u':{
            return 21;
            break;
        }
        case 'v':{
            return 22;
            break;
        }
        case 'w':{
            return 23;
            break;
        }
        case 'x':{
            return 24;
            break;
        }
        case 'y':{
            return 25;
            break;
        }
        case 'z':{
            return 26;
            break;
        }
        case 'A':{
            return 1+26;
            break;
        }
        case 'B':{
            return 2+26;
            break;
        }
        case 'C':{
            return 3+26;
            break;
        }
        case 'D':{
            return 4+26;
            break;
        }
        case 'E':{
            return 5+26;
            break;
        }
        case 'F':{
            return 6+26;
            break;
        }
        case 'G':{
            return 7+26;
            break;
        }
        case 'H':{
            return 8+26;
            break;
        }
        case 'I':{
            return 9+26;
            break;
        }
        case 'J':{
            return 10+26;
            break;
        }
        case 'K':{
            return 11+26;
            break;
        }
        case 'L':{
            return 12+26;
            break;
        }
        case 'M':{
            return 13+26;
            break;
        }
        case 'N':{
            return 14+26;
            break;
        }
        case 'O':{
            return 15+26;
            break;
        }
        case 'P':{
            return 16+26;
            break;
        }
        case 'Q':{
            return 17+26;
            break;
        }
        case 'R':{
            return 18+26;
            break;
        }
        case 'S':{
            return 19+26;
            break;
        }
        case 'T':{
            return 20+26;
            break;
        }
        case 'U':{
            return 21+26;
            break;
        }
        case 'V':{
            return 22+26;
            break;
        }
        case 'W':{
            return 23+26;
            break;
        }
        case 'X':{
            return 24+26;
            break;
        }
        case 'Y':{
            return 25+26;
            break;
        }
        case 'Z':{
            return 26+26;
            break;
        }        
        default:
            return 0;
            break;
    }
}

int letter_to_int(string f){
    int sum = 0;
    for (int i = 0; i < f.size(); i++)
    {
        sum += converter_to_int(f[i]);
    }    
    return sum;
}


int main(){
    string num;

    while (cin>>num)
    {
        int res = eh_primo(letter_to_int(num));

        if(res == 1)
        {
            cout<<"It is a prime word."<<"\n";
        }
        else if(res == 0)
        {
            cout<<"It is not a prime word."<<"\n";
        }
    }
    

    return 0;
}