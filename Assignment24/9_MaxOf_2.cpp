#include<iostream>
#include<math.h>
using namespace std;

int Max(int x, int y)
{
   return (x>y?x:y);
}

float Max(float x, float y)
{
   return (x>y?x:y);
}

int main()
{
    int a,b;
    cout<<"Enter two integer numbers : ";
    cin>>a>>b;
    cout<<"Max of two int number is "<<Max(a,b);

    float e,f;
    cout<<"\nEnter two real numbers : ";
    cin>>e>>f;
    cout<<"Max of two real number is "<<Max(e,f);
    return 0;
}