#include <iostream>
using namespace std;

class Bankaccount
{
    private:
    double balance;

    public:
    Bankaccount(double b)
    {
        balance = b;
    }
    friend void auditor(Bankaccount acc);
};
void auditor(Bankaccount acc)
{
    cout<<"Account balance (auditor view) = "<<acc.balance<<endl;
}
int main()
{
    Bankaccount account(25000.50);
    auditor(account);

    return 0;
}
