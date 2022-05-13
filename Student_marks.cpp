#include<iostream>
#include<string>
using namespace std;
class Student
{
    protected:
    int branch_number;
    string name;
};
class CSE:public Student
{
   int CSE_sub1_marks;
   int CSE_sub2_marks;
   int CSE_sub3_marks;
   public:
       void getdata();
       void display();
};
void CSE::getdata()
{
    cout<<"ENTER THE STUDENT NAME\n";
    getline(cin,name);
    branch_number=1;
    cout<<"ENTER THE MARKS OF THREE SUBJECT\n";
    cin>>CSE_sub1_marks>>CSE_sub2_marks>>CSE_sub3_marks;
}
void CSE::display()
{
    cout<<"STUDENT NAME :"<<name<<endl;
    cout<<"BRANCH NUMBER :"<<branch_number<<endl;
    cout<<"SUBJECT MARKS :\nSUBJECT 1="<<CSE_sub1_marks<<endl;
    cout<<"SUBJECT 2="<<CSE_sub2_marks<<endl;
    cout<<"SUBJECT 3="<<CSE_sub3_marks<<endl;
}
class ECE:public Student
{
   int ECE_sub1_marks;
   int ECE_sub2_marks;
   int ECE_sub3_marks;
   public:
       void getdata();
       void display();
};
void ECE::getdata()
{
    cout<<"ENTER THE STUDENT NAME\n";
    getline(cin,name);
    branch_number=2;
    cout<<"ENTER THE MARKS OF THREE SUBJECT\n";
    cin>>ECE_sub1_marks>>ECE_sub2_marks>>ECE_sub3_marks;
}
void ECE::display()
{
    cout<<"STUDENT NAME :"<<name<<endl;
    cout<<"BRANCH NUMBER :"<<branch_number<<endl;
    cout<<"SUBJECT MARKS :\nSUBJECT 1="<<ECE_sub1_marks<<endl;
    cout<<"SUBJECT 2="<<ECE_sub2_marks<<endl;
    cout<<"SUBJECT 3="<<ECE_sub3_marks<<endl;
}
int main()
{
    CSE ob[2];
    cout <<"DATA OF CSE STUDENT\n";
    for(int i=0;i<2;i++)
    {
        ob[i].getdata();
        fflush(stdin);
    }
    cout<<"DATA OF ECE STUDENT\n";
    ECE obj[3];
    for(int i=0;i<3;i++)
    {
        obj[i].getdata();
        fflush(stdin);
    }
    for(int i=0;i<2;i++)
    {
        ob[i].display();
    }
    for(int i=0;i<3;i++)
    {
        obj[i].display();
    }
    return 0;

}
