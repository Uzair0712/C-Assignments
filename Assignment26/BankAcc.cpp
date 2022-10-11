#include<iostream>
using namespace std;
class Bank{
    int principle,years;
    float SimpleInterest;
    static float interestRate;
    public:
    void Read(){
        cout<<"Enter principle : ";
        cin>>principle;
        cout<<endl<<"Enter year : ";
        cin>>years;
    }
    void CalculaterSI(){
        SimpleInterest=(principle*interestRate*years)/100;
    }
    void ShowSI(){ cout<<endl<<"Simeple interest = "<<SimpleInterest; }
};
float Bank:: interestRate=6.9;
int main(){
    Bank b1;
    b1.Read();
    b1.CalculaterSI();
    b1.ShowSI();
    return 0;
}