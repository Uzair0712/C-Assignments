#include<iostream>
using namespace std;
class integer{
    int n;
    public:
    integer(){
        n=0;
    }
    void Set(int x){ n=x; }
    void Show(){ cout<<n<<endl; }
    integer& operator!(){
        if(n==0)
        n=1;
        else 
        n=0;
        return *this;
    }
    void operator = (int number){
        n=number;
    }
};
int main(){
    integer I;
    I=6;
    I.Show();
    integer J=!!I;
    I.Show();
    J.Show();
    return 0;
}