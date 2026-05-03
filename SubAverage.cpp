#include <iostream>
using namespace std;
int main()
{
    int m1, m2, m3;
    float average;

    cout <<"Enter three Subject marks: ";
    cin >>m1>>m2>>m3;

    average = (m1 + m2 + m3) /3.0;

    cout <<"Average is: "<<average;
    return 0;
}
