#include <iostream>
using namespace std;
int main()
{
   
    cout<< "write the no to find factor of ";
     int factor;
     cin>> factor;
        cout<< " the factors of "<< factor << "are:" <<endl;

    for( int i=1; i<=factor/2; i++)
    {
        if(factor%i==0)
        {
            cout<<i  << " ,";
        }
    }
        cout<< factor;
     return 0;
}