#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1,n2,i,sum=0;
    cout<<"Enter two int:";
    cin>>n1>>n2;
    while(n1<=n2)
    {
        if(n1%2==0)
        {
            cout<<n1<<" ";
            sum=sum+n1;
        }
        n1++;
    }
    cout<<"\n"<<sum;
    getch();
}
