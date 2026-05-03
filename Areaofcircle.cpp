#include <iostream>
using namespace std;
int main()
{
    int radius;
    float area;
    const float pi = 3.1412;

    cout <<"Enter radius: ";
    cin >>radius;

    area = pi * radius * radius;
    cout <<"Area of circle is: "<<area;

    return 0;
}
