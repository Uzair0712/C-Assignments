#include<iostream>
using namespace std;
class Dollar{
    int Dol;
    public:
    Dollar(){}
    Dollar(int d){ Dol=d; }
    void print(){ cout<<Dol<<endl; }
};
int main(){
    int d=45;
    Dollar D;
    D=d;
    D.print();
    return 0;
}