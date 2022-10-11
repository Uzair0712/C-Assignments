#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0;
    cout<<"Enter 10 numbers : ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Sum of all the numbers is "<<sum;
    return 0;
}