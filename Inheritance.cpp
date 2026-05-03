#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
public:

void getName()
    {
        cout<<"Enter stduent name:";
        cin>>name;
    }
};
class Student : public Person
{
private:
    int rollNumber;
    float marks;

    public:
    void getDetails()
    {
        getName();
        cout<<"Enter roll number: ";
        cin>>rollNumber;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void displayInfo()
    {
        cout<<"\n--- Student Information ---"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main()
{
    Student s;

    s.getDetails();

    s.displayInfo();
}
