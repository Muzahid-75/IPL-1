#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int temp;
    cout<<"Enter any temp :";
    cin>>temp;
    if(temp<0)
    {
        cout<<"Freezing Weather"<<endl;
    }
    else if(temp<=10)
    {
        cout<<"Very cold weather"<<endl;
    }
    else if(temp<=20)
    {
        cout<<"cold weather"<<endl;
    }
    else if(temp<=30)
    {
        cout<<"normal weather"<<endl;
    }
    else if(temp<=40)
    {
        cout<<"it\'s hot"<<endl;
    }
    else
    {
        cout<<"very hot weather";
    }
    getch();
}
