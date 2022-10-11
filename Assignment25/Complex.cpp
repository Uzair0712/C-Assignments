#include<iostream>
using namespace std;
class Complex
{
        int a,b;
    public:
        void SetValue(int x, int y)
        {
            a = x;
            b = y;
        }
        void Display()
        {
            cout<<endl<<a<<"+"<<b<<"i";
        }
};

int main()
{
    Complex C1,C2;
    C1.SetValue(2,3);
    C2.SetValue(5,6);
    C1.Display();
    C2.Display();
    return 0;
}