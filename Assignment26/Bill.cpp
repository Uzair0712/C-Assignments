#include<iostream>
using namespace std;
class Bill
{
    float units,bill;
    char name[15];
    public:
    void GetDetails()
    {
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the units used : ";
        cin>>units;
    }
    void CalculateBill()
    {
        if(units>200)
            bill=320+(units-200)*3;
        else if(units>100 && units<=200)
            bill=120+(units-100)*2;
        else if(units<=100 && units>0)
            bill=units*1.2;
    }
    void ShowDetails()
    { cout<<endl<<name<<", Total bill "<<bill<<" Rupees"; }
};
int main()
{
    Bill B;
    B.GetDetails();
    B.CalculateBill();
    B.ShowDetails();
    return 0;
}