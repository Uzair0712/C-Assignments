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
        void ShowData()
        {
            cout<<endl<<a<<"+"<<b<<"i";
        }

        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
};

int main()
{
    Complex C1,C2,C3;
    C1.SetValue(2,3);
    C2.SetValue(5,6);
    C1.ShowData();
    C2.ShowData();
    C3=C1.add(C2);
    C3.ShowData();
    return 0;
}