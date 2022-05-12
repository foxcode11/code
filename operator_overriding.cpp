#include<iostream>
using namespace std;
class FLOAT
{
    float f;
public:
    FLOAT(){}
    FLOAT(float f)
    {
        this->f=f;
    }
    void display();
    FLOAT operator+(FLOAT);
    FLOAT operator-(FLOAT);
    FLOAT operator*(FLOAT);
    FLOAT operator/(FLOAT);
};
void FLOAT::display()
{
    cout<<f<<endl;
}
FLOAT FLOAT::operator+(FLOAT x)
{
    return FLOAT(f+x.f);
}
FLOAT FLOAT::operator-(FLOAT x)
{
        return FLOAT(f-x.f);
}
FLOAT FLOAT::operator*(FLOAT x)
{
    return FLOAT(f*x.f);
}
FLOAT FLOAT::operator/(FLOAT x)
{
    return FLOAT(f/x.f);
}
int main()
{
    FLOAT f1,f2,f3,f4,f5,f6;
    f1=FLOAT(5.5);
    f2=FLOAT(2);
    cout<<"F1= ";
    f1.display();
    cout<<"F2= ";
    f2.display();
    f3=f1+f2;
    cout<<"ADDITION :F3=F1+F2= ";
    f3.display();
    cout<<"SUBSTRACTION :F4=F1-F2= ";
    f4=f1-f2;
    f4.display();
    cout<<"MULTIPLICATION :F5=F1*F2= ";
    f5=f1*f2;
    f5.display();
    cout<<"DIVISION :F6=F1/F2= ";
    f6=f1/f2;
    f6.display();
    return 0;
}
