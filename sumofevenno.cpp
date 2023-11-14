#include<iostream>
using namespace std;
int main()
{ 
    cout<< " write the first  number";
    int firstnumber;
    cin>> firstnumber;
    cout<< " write the last number";
    int lastnumber;
    cin>> lastnumber;
    int sum=0;
      cout<<  "the odd nos between " << firstnumber<< " and " << lastnumber << "are ";
    for(int i=firstnumber; i<lastnumber; i++)
    { 
        if(i%2 !=0)
        { 
            cout<<i << ",";
            sum=sum+ i;
        } 
    } 
        cout<< endl;
            cout<<  "the sum of odd nos between " << firstnumber<< " and " << lastnumber << "are " <<sum;
          return 0;
}