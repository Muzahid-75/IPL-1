#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=2,y=4;
    //y=x++ + x++;
    //y=(++x + x++);
    x=++y;//5
    x+=y++;
    cout<<y<<endl;
    cout<<x;
    getch();
}
