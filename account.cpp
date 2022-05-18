#include<iostream>
using namespace std;
class account
{
public:
    int acno;
    account(int);
    void credit(int);
    void debit(int);
    int getbalance();
};
account:: account(int x)
{
    if(x>=0)
    acno=x;
    else
    {
        acno=0;
        cout<<"the initial balance is invalid\n";
    }
}
void account::credit(int y)
{
    acno=acno+y;
}
void account::debit(int z)
{
    if(z<=acno)
    acno=acno-z;
    else
        cout<<"debit amount exceeded the account balance\n";
}
int account ::getbalance()
{
    cout<<"the current balance is:\n";
    return acno;
}
int main()
{
    account a(100);
    a.credit(100);
    a.debit(50);
    a.getbalance();
    cout<<a.acno;
    return 0;
}
