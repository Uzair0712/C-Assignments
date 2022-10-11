#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(){}
    Complex(int a){ real=a, imag=0; }
    void SetData(int x,int y){ real=x, imag=y; }
    void PrintData(){ cout<<real<<'+'<<imag<<'i'; }

};
int main(){
    Complex C1;
    int x=6;
    C1=x;
    C1.PrintData();
    return 0;
}