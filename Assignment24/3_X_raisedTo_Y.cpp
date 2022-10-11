#include<iostream>
#include<math.h>
using namespace std;

int XraisedToY(int a,int b)
{
    int i,value=1;
    for(i=1;i<=b;i++)
    {
        value*=a;
    }
    return value;
}

int main()
{
    int x, y;
    cout<<"Enter the number and power : ";
    cin>>x>>y;
    cout<<x<<" raised to "<<y<<" = "<<XraisedToY(x,y);
    return 0;
}