#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
    void SetData(int real, int imag){
        this->real=real;
        this->imag=imag;
    }
    void ShowData(){ cout<<endl<<real<<"  "<<imag; }
};

int main(){
    Complex c1,c2;
    c1.SetData(3,4);
    c1.ShowData();
    return 0;
}