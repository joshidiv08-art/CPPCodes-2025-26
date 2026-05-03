#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string div;
    string name;
    float marks[10];
    int n;
    float total;
    float percentage;

public:
    void getdata()
    {
        cout<<"Enter Roll no.: ";
        cin>>rollno;

        cin.ignore();
        cout<<"Enter name: ";
        getline(cin, name);

        cout<<"Enter division: ";
        getline(cin, div);

        cout<<"Enter the number of subjects: ";
        cin>>n;

        total = 0;
        for(int i = 0; i < n; i++)
        {
            cout<<"Enter marks for subject"<<i + 1<<":";
            cin>>marks[i];
            total += marks[i];
        }
        percentage = total/n;
    }
    void display()
    {
        cout<<"Roll no.: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Division: "<<div<<endl;
        cout<<"Total: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.display();

    return 0;
}
