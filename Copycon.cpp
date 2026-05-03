#include <iostream>
using namespace std;

class complex
{
    float x, y, z;

public:
    complex()
    {
        x = 0;
        y = 0;
        z = 0;
    }

    complex(float a, float b, float c)
    {
        x = a;
        y = b;
        z = c;
    }

    complex(const complex & c)
    {
        x = c.x;
        y = c.y;
        z = c.z;
    }

    void display()
    {
        cout << x << " " << y << " " << z << endl;
    }
};
int main()
{
    complex c1;
    complex c2(3, 4, 5);
    complex c3(c1);
    complex c4(c2);

    cout << "object c1 data: ";
    c1.display();

    cout << "object c2 data: ";
    c2.display();

    cout << "object c3 data: ";
    c3.display();

    cout << "object c4 data: ";
    c4.display();

    return 0;
}
