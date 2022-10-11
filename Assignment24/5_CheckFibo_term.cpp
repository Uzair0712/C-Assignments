#include<iostream>
using namespace std;

int FiboTerm(int x)
{
    int a,b,c,i;
    a=-1,b=1,c=a+b;
    for(i=0;c<=x;i++)
    {
        if(x==c)
        return 1;
        a=b;
        b=c;
        c=a+b;
    }
    return 0;  
}

int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    if(FiboTerm(a))
        cout<<a<<"  The number is present in Fibonachi series";
    else
        cout<<a<<"  The number is not present in the fibonachi series";
    return 0;
}