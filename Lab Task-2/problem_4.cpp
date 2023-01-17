#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float bangla,english,math,chemistry,physics;
    cout<<"Enter mark of five subject :";
    cin>>bangla>>english>>math>>chemistry>>physics;
    float total=bangla+english+math+chemistry+physics;
    cout<<"Average is :"<<total/5<<endl;
    cout<<"Percentage is :"<<(total/500)*100;
    getch();
}
