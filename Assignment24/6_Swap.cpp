#include<iostream>
#include<math.h>
using namespace std;

void Swap(int &x, int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    Swap(a,b);
    cout<<"a = "<<a<<"  b = "<<b;
    return 0;
}