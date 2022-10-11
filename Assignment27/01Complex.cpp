#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
        void SetData(int x, int y){ real=x, imag=y; }
        void ShowData(){ cout<<endl<<real<<'+'<<imag<<'i'; }
        Complex operator +(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp;
        }
        Complex operator -(Complex c)
        {
            Complex temp;
            temp.real=real-c.real;
            temp.imag=imag-c.imag;
            return temp;
        }
        Complex operator *(Complex c)
        {
            Complex temp;
            temp.real=real*c.real-imag*c.imag;
            temp.imag=real*c.imag+imag*c.real;
            return temp;
        }
        bool operator ==(Complex c)
        {
            if(real==c.real && imag==c.imag)
                return true;
            else
                return false;
        }
};
int main()
{
    Complex c1,c2,c3,c4,c5,c6,c7;
    c1.SetData(2,3);
    c2.SetData(4,5);
    c7.SetData(2,3);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c1.ShowData();
    c2.ShowData();
    c3.ShowData();
    c4.ShowData();
    c5.ShowData();
    if(c1==c2)
        cout<<"\nc1 and c2 are same";
    else
        cout<<"\nc1 and c2 are not same";
    if(c1==c7)
        cout<<"\nc1 and c7 are same";
    else
        cout<<"\nc1 and c7 are not same";
    return 0;
}