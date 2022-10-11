#include<iostream>
using namespace std;
class Rupee{
    int Rup;
    public:
    Rupee(){}
    Rupee(int r){ Rup=r; }
    void print(){
        cout<<Rup<<endl;
    }
    operator int(){
        return Rup;
    }
};
int main(){
    Rupee R=56;
    int x;
    x=R;
    cout<<x;
    return 0;
}