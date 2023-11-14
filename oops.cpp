#include <iostream>
using namespace std;
class personalinformation
{
    public:
    string name;
    string parentage;
    string residence;
    int mobileno;
    int adhaarno;
    string qualification;
    int marks;
    string experience;
    personalinformation(string name1, string parentage1, string residence1, int mobileno1, int adhaarno1, string qualification1, int marks1, string experience1)
{
     name=name1;
     parentage=parentage1;
     residence=residence1;
     mobileno=mobileno1;
     adhaarno=adhaarno1;
     qualification=qualification1;
     marks=marks1;
     experience=experience1;
}
};
int main()
{
    
    personalinformation details(" mehak" , "mohdamin", " zainakadal", 123, 723," graduate", 100, " 2years");
    

    cout << " The collected details are:" << endl;
    cout<< " Name:" << details.name << endl;
    cout<< " Parentage:" << details.parentage << endl;
    cout<< " Residence:" << details.residence << endl;
    cout<< " Mobileno:" << details.mobileno << endl;
    cout<< " Adhaarno:" << details.adhaarno << endl;
    cout<< " Qualification:" << details.qualification << endl;
    cout<< " Marks:" << details.marks << endl;
    cout<< " Experience:" << details.experience << endl;
}









