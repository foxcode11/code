#include<iostream>
#include<string>
using namespace std;
class Total;
class Student
{
protected:
    string name;
    int roll_no;
public:
    void display()
{
    cout<<"STUDENT NAME IS: "<<name<<endl;
    cout<<"ROLL NO. IS: "<<roll_no<<endl;
}
};

class T1T2T3
{
protected:
    int t1,t2,t3;
public:
    void display()
    {
    cout<<"MARKS OBTAIN\nT1="<<t1<<endl;
    cout<<"T2="<<t2<<"\nT3="<<t3;
    }
};
class P1P2
{
    protected:
    int p1,p2;
    public:
    void display()
    {
    cout<<"MARKS OBTAIN\nP1="<<p1<<endl<<"P2="<<p2<<endl;
    }
};
class attendance
{
    protected:
    int a;
    public:
        void display()
        {
            cout<<"ATTENDANCE PERCENTAGE IS: "<<a;
        }
};
/*class Total:public T1T2T3,public P1P2,public attendance
{
protected:
    int total_marks=t1+t2+t3+p1+p2;
    string grade;
public:
    void display()
    {
        cout<<"TOTAL MARKS: "<<total_marks<<endl<<"GRADE OBTAINED: "<<grade<<endl;
    }
};*/
class Faculty:public T1T2T3,public P1P2,public attendance
{
public:
    void getdata();
    void friend assign(Total,Faculty);
};
void Faculty::getdata()
{
    cout<<"ENTER THE MARKS OF T1\n";
    cin>>t1;
    cout<<"ENTER THE MARKS OF T2\n";
    cin>>t2;
    cout<<"ENTER THE MARKS OF T3\n";
    cin>>t3;
    cout<<"ENTER THE MARKS OF P1\n";
    cin>>p1;
    cout<<"ENTER THE MARKS OF P2\n";
    cin>>p2;
    cout<<"ENTER THE ATTENDANCE PERCENTAGE\n";
    cin>>a;
}
class Total
{
protected:
    int total_marks;
    string grade;
public:
    friend void assign(Total,Faculty);
    void display()
    {
        cout<<"TOTAL MARKS: "<<total_marks<<endl<<"GRADE OBTAINED: "<<grade<<endl;
    }
};
void assign(Total t,Faculty f)
{
    t.total_marks=f.t1+f.t2+f.t3+f.p1+f.p2;
}
class Adminstration:public Total,public Student
{
public:
    void getdata();
    void calculate();

};
void Adminstration::getdata()
{
    cout<<"ENTER THE STUDENT NAME\n";
    getline(cin,name);
    cout<<"ENTER THE ROLL NO.\n";
    cin>>roll_no;
}
void  Adminstration::calculate()
{
    int p;

    p=total_marks/500;
    if(p>80)
    {
        grade="A";
    }
    else if(p>70&&p<=80)
    {
        grade="B";
    }
    else if(p>60&&p<=70)
    {
        grade="C";
    }
    else if(p>=50&&p<=60)
    {
        grade="D";
    }
    else
    {
        grade="F";
    }
}
int main()
{
    Faculty f[2];
    Adminstration ad[2];
    for(int i=0;i<2;i++)
    {
        ad[i].getdata();
        f[i].getdata();
        ad[i].calculate();
        fflush(stdin);
    }
    for(int i=0;i<2;i++)
    {
        ad[i].Student::display();
        ad[i].Total::display();
    }
    return 0;
}
