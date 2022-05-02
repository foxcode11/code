#include<iostream>
#include<cmath>
using namespace std;
void bin_dec(int n)
{
    int i=0,r=0,dec=0;
    while(n!=0)
    {
      r=n%10;
      dec=dec+r*pow(2,i);
      i++;
      n=n/10;
    }
    cout<<"DECIMAL EQUIVALENT IS: "<<dec;
}
int main()
{
    int n;
    cout<<"ENTER THE BINARY NUMBER\n";
    cin>>n;
    bin_dec(n);
    return 0;
}
