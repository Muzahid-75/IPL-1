#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter the number:";
    cin>>mark;
    if(mark>100 || mark<0)
    {
        cout<<"invalid"<<endl;
    }
    else if(mark>=90)
    {
        cout<<"A+"<<endl;
    }
    else if(mark>=85)
    {
        cout<<"A"<<endl;
    }
    else if(mark>=80)
    {
        cout<<"B+"<<endl;
    }
    else if(mark>=75)
    {
        cout<<"C+"<<endl;
    }
    else if(mark>=70)
    {
        cout<<"C"<<endl;
    }
    else if(mark>=65)
    {
        cout<<"D+"<<endl;
    }
    else if(mark>=60)
    {
        cout<<"D"<<endl;
    }
    else
    {
        cout<<"Fail";
    }
    getch();
}
