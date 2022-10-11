#include<iostream>
#include<math.h>
using namespace std;

int HighestValueDigit(int x)
{
    int max;
    max = x % 10;
    while(x)
    {
        x /= 10;
        if(x % 10 > max)
            max = x % 10;
    }   
    return max;
}
int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"The highest value digit of the number is "<<HighestValueDigit(a);
    return 0;
}