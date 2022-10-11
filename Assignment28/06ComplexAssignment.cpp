#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
    Complex(){}
    Complex(Complex &C){
        real=C.real;
        imag=C.imag;
    }
    Complex & operator=(Complex &C){
        real=C.real;
        imag=C.imag;
        return *this;
    }
    friend istream& operator >>(istream&,Complex&);
    friend ostream& operator <<(ostream&,Complex);
};
istream& operator >>(istream &din, Complex &c){
    cout<<"Enter real and Imagionary parts : ";
    din>>c.real>>c.imag;
    return din;
}
ostream& operator <<(ostream &dout, Complex c){
    dout<<c.real<<"+"<<c.imag<<'i'<<endl;
    return dout;
}

int main(){
    Complex c1,c2;
    cin>>c1;
    c2=c1;
    Complex c3=c1;
    cout<<c1<<c2<<c3;
    return 0;
}