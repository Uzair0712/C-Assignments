#include<iostream>
using namespace std;
class GreatesNumber
{
    int a,b,c,Greates;
    public:
    void SetValue(int x,int y,int z)
    {
        a=x, b=y, c=z;
    }

    void FindLargets()
    {
        Greates = a>b?a>c?a:c:b>c?b:c;
    }

    int GetGreates(){ return Greates; }
};

int main()
{
    GreatesNumber L;
    L.SetValue(43,5,20);
    L.FindLargets();
    cout<<"Largets of three number is "<<L.GetGreates();
    return 0;
}