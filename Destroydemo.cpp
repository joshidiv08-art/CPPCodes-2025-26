#include <iostream>
using namespace std;
int count = 0;
class demo
{
    public:
    demo()
    {
        count++;
        cout<<"No of obj created"<<count<<endl;
    }
    ~demo()
    {
        cout<<"No of object destroyed"<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"Enter MAIN"<<endl;
    demo d1, d2, d3, d4;

    return 0;
}
