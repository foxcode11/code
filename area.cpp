#include<iostream>
using namespace std;
int area(int x)
{
    return x*x;
}
int area(int l,int b)
{
    return l*b;
}
float area(double r,float p=3.14)
{
    return p*r*r;
}
int main()
{
    cout<<"area of square is\n"<<area(4)<<endl;
    cout<<"area of rectangle is\n"<<area(3,4)<<endl;
    cout<<"area of circle is\n"<<area(3.0);
}
