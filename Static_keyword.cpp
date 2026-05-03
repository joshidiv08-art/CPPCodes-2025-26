#include <iostream>
using namespace std;

class student
{
    private:
    static int count;

    public:
    student()
    {
        count++;
    }
    static void showCount()
    {
        cout<<"Total number of student = "<<count<<endl;
    }
};
int student:: count = 0;

int main()
{
    student s1;
    student s2;
    student s3;

    student::showCount();

    return 0;
}
