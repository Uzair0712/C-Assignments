#include<iostream>
using namespace std;
class Factorial
{
    int n,fact;
    public:
    void Set_n(int x){ n=x; }

    int Get_n(){ return n; }

    void CalculateFact()
    {
        int temp=1;
        for(int i=1;i<=n;i++)
            temp*=i;
        fact = temp;
    }

    int Get_fact(){ return fact; }
};

int main()
{
    Factorial F;
    F.Set_n(8);
    F.CalculateFact();
    cout<<"Factorial of "<<F.Get_n()<<" is "<<F.Get_fact();
    return 0;
}