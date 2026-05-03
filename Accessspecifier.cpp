#include <iostream>
using namespace std;
class Patient
{
private:
    string name;
    int age;

protected:
    string hospitalID;

public:
    void setDetails(string n, int a)
    {
        name = n;
        age = a;
    }
    void getdata()
    {
        cout << "Enter hospital ID: ";
        cin >> hospitalID;
        cout << "Hospital ID: " << hospitalID << endl;
    }
    void displayDetails()
    {
        cout << "Name: " << name << "  Age: " << age << endl;
    }
};
int main()
{
    Patient obj;
    obj.setDetails("Dev Senghani", 20);   // fixed function name
    obj.displayDetails();
    obj.getdata();

    return 0;
}
