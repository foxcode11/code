#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void flip()
{
    int c=0,r;
    srand(time(NULL));
    for(int i=1;i<=100;i++)
    {
        r=(rand()%2);
        if(r==0)
        {
            cout<<"TAILS"<<endl;
            c++;
        }
        else
            cout<<"HEADS"<<endl;
    }
    cout<<"THE NUMBER OF TAILS ARE :"<<c<<endl;
    cout<<"THE NUMBER OF HEADS ARE :"<<(100-c)<<endl;
}

int main()
{
    flip();
    return 0;
}
