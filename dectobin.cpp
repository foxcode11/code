#include<iostream>
using namespace std;
void dec_bin(int n)
{
    int i=1,r=0,bin=0;
    while(n!=0)
    {
      r=n%2;
      bin=bin+r*i;
      n=n/2;
      i=i*10;
    }
    cout<<"BINARY EQUIVALENT IS: "<<bin;
}
int main()
{
    int n;
    cout<<"ENTER THE DECIMAL NUMBER\n";
    cin>>n;
    dec_bin(n);
    return 0;
}
