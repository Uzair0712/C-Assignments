#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
        void SetData(int x, int y){ real=x, imag=y; }
        void ShowData(){ cout<<endl<<real<<'+'<<imag<<'i'; }
        Complex operator ++()
        {
            
            Complex temp;
            temp.real=++real;
            temp.imag=++imag;
            return temp;
        }
        Complex operator ++(int)
        {
            
            Complex temp;
            temp.real=real++;
            temp.imag=imag++;
            return temp;
        }
        Complex operator --()
        {
            
            Complex temp;
            temp.real=--real;
            temp.imag=--imag;
            return temp;
        }
        Complex operator --(int)
        {
            
            Complex temp;
            temp.real=real--;
            temp.imag=imag--;
            return temp;
        }
        
};
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.SetData(2,3);
    c2=++c1;
    c2.ShowData();
    c1.ShowData();

    c3=c1++;
    c3.ShowData();
    c1.ShowData();

    c4=--c1;
    c4.ShowData();
    c1.ShowData();
    
    c5=c1--;
    c5.ShowData();
    c1.ShowData();
    
    return 0;
}