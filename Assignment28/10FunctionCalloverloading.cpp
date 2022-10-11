#include<iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
    public:
    Distance(){}
    Distance(int a, int b){
        feet=a,inches=b;
    }
    void SetValues(int a,int b){
        feet=a,inches=b;
    }
    void Show(){
        cout<<endl<<"Feet = "<<feet<<"  Inches = "<<inches;
    }
    Distance operator()(int a,int b,int c){
        feet=a+c+5;
        inches=a+b+15;
        return *this;
    }
};
int main(){
    Distance C,D(4,5);
    C=C(10,20,30);
    D.Show();
    C.Show();
    return 0;

}