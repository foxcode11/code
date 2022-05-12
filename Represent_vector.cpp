#include<iostream>
using namespace std;
class vector
{
public:
    float x,y,z;
    void create()
    {
        cout<<"ENTER X-AXIS MAGNITUDE\n";
        cin>>x;
        cout<<"ENTER Y-AXIS MAGNITUDE\n";
        cin>>y;
        cout<<"ENTER Z-AXIS MAGNITUDE\n";
        cin>>z;
    }
    void display();
    void modify();
    void scalar(int);
};
void vector::modify()
{
    char c;
   cout<<"ENTER X ,Y OR Z TO MODIFY IN X,Y,Z MAGNITUDE RESPECTIVLY\n";
   cin>>c;
   if(c=='X')
   {
       cout<<"ENTER THE NEW VALUE OF X\n";
       cin>>x;
   }
   if(c=='Y')
   {
    cout<<"ENTER THE NEW VALUE OF Y\n";
    cin>>y;
   }
   if(c=='Z')
   {
    cout<<"ENTER THE NEW VALUE OF Z\n";
    cin>>z;
   }
}
void vector::scalar(int a)
{
    x=a*x;
    y=a*y;
    z=a*z;
}
void vector::display()
{
    cout<<"VECTOR A="<<x<<"i +"<<y<<"j +"<<z<<"k"<<endl;
}
int main()
{
    int m;
    vector v;
    v.create();
    v.display();
        int i;
        A:
        v.modify();
        cout<<"CHOOSE 1 TO MODIFY IT AGAIN ELSE CHOOSE 0\n";
        cin>>i;
        if(i==1)
            goto A;
            v.display();
        int s;
        cout<<"ENTER THE SCALAR VALUE\n";
        cin>>s;
        v.scalar(s);
        v.display();
    return 0;
}