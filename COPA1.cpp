#include <iostream>
#include <queue>

using namespace std;

int main(){
    int t1[16] = {0}, t2[16] = {0};
    char c = ' ';
    queue<char> res;
    res.push('A'); res.push('B'); res.push('C'); res.push('D'); res.push('E');
    res.push('F'); res.push('G'); res.push('H'); res.push('I'); res.push('J');
    res.push('K'); res.push('L'); res.push('M'); res.push('N'); res.push('O');
    res.push('P');

    for (int i = 1; i < 16; i++)
    {
        cin>>t1[i]>>t2[i];

        if(t1[i]>t2[i]){
            c = res.front();
            res.pop();
            res.pop();
        }
        else if(t2[i]>t1[i]){
            res.pop();
            c = res.front();
            res.pop();
        }

        res.push(c);
    }
    
    cout<<res.back()<<"\n";

    return 0;
}