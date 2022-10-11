#include<iostream>
using namespace std;
class Product{
    int price,Qnt;
    public:
    Product(){}
    void SetData(int x, int y){ price=x, Qnt=y; }
    int GetPrice(){ return price;}
    int GetQnt(){ return Qnt;}
    void Print(){ cout<<"Price = "<<price<<" Quantity = "<<Qnt; }
};
class Item{
    int Value,Number;
    public:
    Item(){}
    Item(Product P){
        Value=P.GetPrice();
        Number=P.GetQnt();
    }
    void Print(){ cout<<endl<<"Value = "<<Value<<" Number = "<<Number; }
};
int main(){
    Item I;
    Product P;
    P.SetData(3,7);
    I=P;
    P.Print();
    I.Print();
    return 0;
}