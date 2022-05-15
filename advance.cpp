#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY\n";
    cin>>n;
    int ar[n-1];
    cout<<"ENTER THE ELEMENTS OF ARRAY\n";
    for(int i=0;i<n-1;i++)
    {
     cin>>ar[i];
    }
    int sum=0;
     for(int i=0;i<n-1;i++)
    {
     sum+=ar[i];
    }
    int s=(n*(n+1))/2;
    cout<<"THE MISSING ELEMENT IS\n"<<s-sum;
    return 0;
}
