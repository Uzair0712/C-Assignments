#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
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
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
}