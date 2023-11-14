#include<iostream>
using namespace std;
int main (){
    int a=10;
    int b=1;
    while(a>b){
       std::cout<< std::string(a,'*')<<endl;
        a-=1;
    }
    return 0;     
}
