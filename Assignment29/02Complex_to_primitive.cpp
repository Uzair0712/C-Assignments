#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    void SetData(int x,int y){ real=x, imag=y; }
    void PrintData(){ cout<<real<<'+'<<imag<<'i'; }
    operator int(){
        return real;
    }
};
int main(){
    Complex C1;
    C1.SetData(4,5);
    C1.PrintData();
    int x;
    x=C1;
    cout<<endl<<"x = "<<x;
    return 0;
}