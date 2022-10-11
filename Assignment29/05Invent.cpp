#include<iostream>
using namespace std;

class Invent1{
    int a,b;
    public:
    Invent1(){}
    void Print(){ cout<<a<<", "<<b<<endl; }
     Invent1(int x,int y){
        a=x,b=y;
    }
    int get_a(){ return a; }
    int get_b(){ return b; }
    operator float(){
        return (a/1.0);
    }
};  

class Invent2{
    int c,d;
    public:
    Invent2(){ cout<<"default constructor for Invent 2\n"; }
    Invent2(Invent1 I1){
        c=I1.get_a();
        d=I1.get_b();
    }
    void Print(){ cout<<c<<", "<<d<<endl; }
};
int main(){
    Invent1 I1(4,5);
    float x;
    x=I1;
    Invent2 I2;
    I2=I1;
    I1.Print();
    I2.Print();
    cout<<"x = "<<x;
    return 0;
}