#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,row,col;
    cout<<"Enter the number:";
    cin>>num;
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<"\n";
    }
    getch();
}
