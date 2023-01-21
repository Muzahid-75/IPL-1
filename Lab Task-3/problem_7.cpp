#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int digit,temp,rem,sum=0,count=0;
    cout<<"Enter the digit:";
    cin>>digit;
    temp=digit;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
        count++;
        //cout<<temp;
    }
    cout<<sum<<endl;
    cout<<"Number of digit is :"<<count;
    getch();
}
