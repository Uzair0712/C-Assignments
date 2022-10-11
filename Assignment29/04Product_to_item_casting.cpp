#include<iostream>
using namespace std;

class Item{
    int Value,Number;
    public:
    Item(){}
    void Set_Date(int a,int b){ Value=a, Number=b; }
    void Print(){ cout<<endl<<"Value = "<<Value<<" Number = "<<Number; }
};
class Product{
    int price,Qnt;
    public:
    Product(){}
    void SetData(int x, int y){ price=x, Qnt=y; }
    int GetPrice(){ return price;}
    int GetQnt(){ return Qnt;}
    void Print(){ cout<<"Price = "<<price<<" Quantity = "<<Qnt; }
    operator Item(){
        Item temp;
        temp.Set_Date(price,Qnt);
        return temp;        
    }
};
int main(){
    Item I;
    Product P;
    P.SetData(56,7);
    I=P;
    P.Print();
    I.Print();
    return 0;
}