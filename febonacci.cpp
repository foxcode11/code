#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int feb(int x)
{
    if(x==1||x==0)
    {
        return x;
    }
    else
    {
        return feb(x-1)+feb(x-2);
    }
}
int main()
{
    int  n;
    clock_t s,e;
    cout<<"Enter the number of Terms: ";
    cin>>n;
    s=clock();
    for(int i=0;i<n;i++)
    {
        cout<<feb(i)<<" ";
    }
    e=clock();
    cout<<"\nThe Execution time is\n ";
    double time=(double)(e-s)/(double)CLOCKS_PER_SEC;
    cout <<"Time taken by program is : " << fixed<< time << setprecision(5);
    return 0;
}
