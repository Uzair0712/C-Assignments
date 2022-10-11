#include<iostream>
using namespace std;
class Dollar{
    float Dol;
    public:
    Dollar(){}
    Dollar(float d){ Dol=d;}
    void print(){ cout<<Dol<<endl; }
    float Get_dol(){ return Dol; }
    void Set_dol(float x){ Dol=x; }
};
class Rupee{
    float Rup;
    public:
    Rupee(){}
    Rupee(float r){ Rup=r; }
    Rupee(Dollar D){
        Rup=82.83*D.Get_dol();
    }
    void print(){
        cout<<Rup<<endl;
    }
    operator Dollar(){
        Dollar D;
        D.Set_dol(Rup/82.83);
        return D;
    }
};
int main(){
    Rupee R1(500);
    Dollar D1;
    D1=R1;
    cout<<"R1 and D1\n";
    R1.print();
    D1.print();
    Dollar D2(2);
    Rupee R2;
    R2=D2;
    cout<<"R2 and D2\n";
    R2.print();
    D2.print();
    return 0;
}