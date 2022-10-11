#include<iostream>
using namespace std;
class Fraction{
    long numerator;
    long denomenator;
    public:
        Fraction(){ numerator=0, denomenator=0; }
        friend Fraction operator ++ (Fraction&); 
        friend Fraction operator ++ (Fraction&,int); 
        friend istream& operator >> (istream&, Fraction&);
        friend ostream& operator << (ostream&, Fraction);
        
};
Fraction operator ++ (Fraction &f){
    Fraction temp;
    temp.numerator=++f.numerator;
    temp.denomenator=++f.denomenator;
    return temp;
}
Fraction operator ++ (Fraction &f,int){
    Fraction temp;
    temp.numerator=f.numerator++;
    temp.denomenator=f.denomenator++;
    return temp;
}
istream& operator >>(istream &din, Fraction &f){
    cout<<"Enter Numerator : ";
    cin>>f.numerator;
    cout<<"Enter denomenator : ";
    cin>>f.denomenator;
    return din;
}
ostream& operator <<(ostream &dout, Fraction f){
    cout<<endl<<f.numerator<<"/"<<f.denomenator;
    return dout;
}
int main(){
    Fraction f1,f2,f3;
    cin>>f1;
    f2=++f1;
    cout<<f1<<f2;
    f3=f1++;
    cout<<f1<<f3;
    return 0;
}