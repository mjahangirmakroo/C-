#include <iostream>
using namespace std;
int main()
{ 
    int numbers[] = { 4, 5, 6, 8, 9, 4, 68, 4, 9,54, 9, 4, 56, 56};
    int size= sizeof(numbers)/ sizeof(int);
    for(int i=0; i<size; i++)
    {
           int count=0;

        for( int j=0; j<size; j++)
        {
            if( numbers[i]==numbers[j])
            {
               count++;
               
            }
              if( count>1)
            {
                cout<< numbers[i] << ",";
                count=0;
            }
    }

}
        
}