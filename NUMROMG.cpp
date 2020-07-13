#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;
//os numeros são recebidos na base 36, após receber fazer conversão para decimal, somar e converter novamente em base 36...

int64_t base36_to_int(char t){
    switch (t)
    {
        case 'A':{
            return 10;
            break;
        }
        case 'B':{
            return 11;
            break;
        }
        case 'C':{
            return 12;    
            break;
        }
        case 'D':{
            return 13;    
            break;
        }
        case 'E':{
            return 14;
            break;
        }
        case 'F':{
            return 15;
            break;
        }
        case 'G':{
            return 16;    
            break;
        }
        case 'H':{
            return 17;
            break;
        }
        case 'I':{
            return 18;
            break;
        }
        case 'J':{
            return 19;
            break;
        }
        case 'K':{
            return 20;
            break;
        }
        case 'L':{
            return 21;
            break;
        }
        case 'M':{
            return 22;
            break;
        }
        case 'N':{
            return 23;
            break;
        }
        case 'O':{
            return 24;
            break;
        }
        case 'P':{
            return 25;
            break;
        }
        case 'Q':{
            return 26;
            break;
        }
        case 'R':{
            return 27;
            break;
        }
        case 'S':{
            return 28;
            break;
        }
        case 'T':{
            return 29;
            break;
        }
        case 'U':{
            return 30;
            break;
        }
        case 'V':{
            return 31;
            break;
        }
        case 'W':{
            return 32;
            break;
        }
        case 'X':{
            return 33;
            break;
        }
        case 'Y':{
            return 34;
            break;
        }
        case 'Z':{
            return 35;
            break;
        }
        default:
            return t-'0';
            break;
    }
}

char int_to_base36(int t){
    switch (t)
    {
        case 10:{
            return 'A';
            break;
        }
        case 11:{
            return 'B';
            break;
        }
        case 12:{
            return 'C';    
            break;
        }
        case 13:{
            return 'D';    
            break;
        }
        case 14:{
            return 'E';
            break;
        }
        case 15:{
            return 'F';
            break;
        }
        case 16:{
            return 'G';    
            break;
        }
        case 17:{
            return 'H';
            break;
        }
        case 18:{
            return 'I';
            break;
        }
        case 19:{
            return 'J';
            break;
        }
        case 20:{
            return 'K';
            break;
        }
        case 21:{
            return 'L';
            break;
        }
        case 22:{
            return 'M';
            break;
        }
        case 23:{
            return 'N';
            break;
        }
        case 24:{
            return 'O';
            break;
        }
        case 25:{
            return 'P';
            break;
        }
        case 26:{
            return 'Q';
            break;
        }
        case 27:{
            return 'R';
            break;
        }
        case 28:{
            return 'S';
            break;
        }
        case 29:{
            return 'T';
            break;
        }
        case 30:{
            return 'U';
            break;
        }
        case 31:{
            return 'V';
            break;
        }
        case 32:{
            return 'W';
            break;
        }
        case 33:{
            return 'X';
            break;
        }
        case 34:{
            return 'Y';
            break;
        }
        case 35:{
            return 'Z';
            break;
        }
        default:
            return t +'0';//conversão para char
            break;
    }
}

int main(){
    int64_t t=0;
    string n1, n2;

    while (cin>>n1>>n2 && (n1[0]!='0' && n2[0]!= '0'))
    {
        string res="";
        int64_t num1=0;

        for (int i=0,j=0, exp1=n1.size(), exp2=n2.size(); i < n1.size() || j < n2.size(); i++, j++, --exp1, --exp2)
        {   
            if(i<n1.size()){
                num1 += pow(36, exp1)*base36_to_int(n1[i]);
            }
            if(j<n2.size()){
                num1 += pow(36, exp2)*base36_to_int(n2[j]);
            }
        }

        //cout<<num1<<"\n";

        while (num1>0)
        {
            res += int_to_base36(num1%36);
            num1 /= 36;
        }
        
        reverse(res.begin(), res.end());
        res.erase(res.size()-1);
        cout<<res<<"\n";
    }



    return 0;
}