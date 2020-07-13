#include <iostream>
using namespace std;

int main()
{
    int A, B, C;

    cin>>A>>B>>C;

    if(A>B&&(B<=C)){
        cout<<":)\n";
    }
    else if(A<B&&(B>=C)){
        cout<<":(\n";
    }
    else if((A<B&&B<C)&&(C-B<B-A)){
        cout<<":(\n";
    }
    else if((A<B&&B<C)&&(C-B>=B-A)){
        cout<<":)\n";
    }
    else if((A>B&&B>C)&&(B-C<A-B)){
        cout<<":)\n";
    }
    else if((A>B&&B>C)&&(B-C>=A-B)){
        cout<<":(\n";
    }
    else if(A==B&&B<C){
        cout<<":)\n";
    }
    else{
        cout<<":(\n";
    }
    return 0;
}