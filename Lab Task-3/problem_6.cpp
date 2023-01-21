#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1,n2,first=0,second=1,febo,count=0,i,sum=0;
    cout<<"Enter the range:";
    cin>>n1>>n2;
    while(febo<n2)
    {
        if(count<=1)
        {
            febo=count;
        }
        else
        {
            febo=first+second;
            first=second;
            second=febo;
        }

        cout<<febo<<" ";
        febo=febo+first;
        count++;
    }


    getch();
}
