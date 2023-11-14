#include<iostream>
using namespace std;
int main(){
    int lastdigit=0;
    int seconddigit=1;
    int fibonacci=0;
    for( int i=0; i<10; i++)
    {  
        fibonacci=seconddigit +lastdigit;
        cout<<fibonacci <<endl;
        seconddigit=lastdigit;
        lastdigit=fibonacci;
    }
        return 0;

    }
        
