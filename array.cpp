#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {3, 5, 6, 8, 67,98,45,32,99};
    int size= sizeof(numbers)/sizeof(int);
    int largestnumber=0;
    int secondlargest;
    int thirdlargest;
    for (int i=0; i< size; i++)
    {   
        if(largestnumber < numbers[i])
        {  
            thirdlargest= secondlargest;
            secondlargest= largestnumber;
            largestnumber= numbers[i];
        }
    }
            cout<< thirdlargest<< ",,,";
}