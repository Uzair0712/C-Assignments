#include<iostream>
using namespace std;
class LargestNumber
{
    int a,b,c,Largest;
    public:
    void SetValue(int x,int y,int z)
    {
        a=x, b=y, c=z;
    }

    void FindLargets()
    {
        Largest = a>b?a>c?a:c:b>c?b:c;
    }

    int GetLargest(){ return Largest; }
};

int main()
{
    LargestNumber L;
    L.SetValue(43,5,20);
    L.FindLargets();
    cout<<"Largets of three number is "<<L.GetLargest();
    return 0;
}