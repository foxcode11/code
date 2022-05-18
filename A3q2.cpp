#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outf("item.txt");
    cout<<"enter item name:";
    char name[20];
    cin>>name;
    outf<<name<<endl;
    cout<<"enter item cost:";
    float cost;
    cin>>cost;
    outf<<cost<<endl;
    outf.close();
    ifstream inf("item.txt");
    inf>>name;
    inf>>cost;
    cout<<endl;
    cout<<"item name:"<<name<<endl;
    cout<<"item cost:"<<cost<<endl;
    inf.close();
    return 0;
}
