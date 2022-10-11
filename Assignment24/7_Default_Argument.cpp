#include<iostream>
#include<math.h>
using namespace std;

int Add(int x, int y, int z=0)
{
    return x+y+z;
}

int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"sum of two number is "<<Add(a,b);

    int e,f,g;
    cout<<"\nEnter three numbers ";
    cin>>e>>f>>g;
    cout<<"sum of three numbers is "<<Add(e,f,g);
    
}