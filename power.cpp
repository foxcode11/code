#include<iostream>
using namespace std;
 int power(int x,int y)
{
     int s=1;
    for(int i=1;i<=y;i++)
        s=s*x;
    return s;
}
int main()
{
    int x,y,p;
    cout<<"ENTER THE TWO INTEGER: x^y\n";
    cin>>x>>y;
    cout<<"THE RESULT IS: ";
    p=power(x,y);
    cout<<p;
    return 0;
}
