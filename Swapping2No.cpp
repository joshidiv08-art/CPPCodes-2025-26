#include <iostream>
using namespace std;

int main() {
    int a,b,temp;

    cout <<"Enter two number: ";
    cin >>a>>b;

    temp = a;
    a = b;
    b = temp;


    cout <<"After Swapping: ";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
