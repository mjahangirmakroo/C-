#include <iostream>
using namespace std;
 int main()
{ 
    cout<< "write the number";
    long long int number;
    cin>> number; 
    int lastdigit;
     long int sum=0;
    while(number>0 )
    {
        lastdigit=number%10; 
        number=number/10;
        sum= sum+lastdigit;
}
      cout<<sum;
}