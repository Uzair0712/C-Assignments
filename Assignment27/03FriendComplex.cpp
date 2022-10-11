#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
        void SetData(int x, int y){ real=x, imag=y; }
        void ShowData(){ cout<<endl<<real<<'+'<<imag<<'i'; }
        friend Complex operator +(Complex, Complex);
        
};

Complex operator + (Complex a,Complex b)
        {
            Complex temp;
            temp.real=a.real+b.real;
            temp.imag=a.imag+b.imag;
            return temp;
        }

int main()
{
    Complex c1,c2,c3;
    c1.SetData(2,3);
    c2.SetData(4,5);
    c3=c1+c2;
    c3.ShowData();
    return 0;
}