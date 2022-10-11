#include<iostream>
#include<math.h>
using namespace std;

int IsPrime(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    if(IsPrime(a))
        cout<<a<<" is a Prime numer";
    else
        cout<<a<<" is not a Prime number";
    return 0;
}