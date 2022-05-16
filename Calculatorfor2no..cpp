#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    char s;
    cout<<"ENTER FIRST TWO VALUES:"<<endl;
    cin>>a>>b;
    cout<<"ENTER THE OPERATOR:"<<endl;
    cin>>s;
    cout<<"ENTER LAST TWO VALUES:"<<endl;
    cin>>c>>d;
    switch(s)
    {
        case '+': cout<<"a/b+c/d="<<(a*d+b*c)<<"/"<<(b*d);
                break;
        case '-': cout<<"a/b-c/d="<<(a*d-b*c)<<"/"<<(b*d);
                break;
        case '*': cout<<"a/b*c/d="<<(a*c)<<"/"<<(b*d);
                break;
        case '/': cout<<"a/b/c/d="<<(a*d)<<"/"<<(b*c);
                 break;
        default :cout<<"INCORRECT CHOICE";
    }
}
