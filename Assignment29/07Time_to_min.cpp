#include<iostream>
using namespace std;
class Time{
    int hour,min;
    public:
    Time(){}
    Time(int a,int b){
        hour=a, min=b;
    }
    void print(){ cout<<hour<<" hours "<<min<<" minutes "<<endl; }
    int Get_Time(){
        int temp;
        temp=hour*60+min;
        return temp;
    }
};
class Minute{
    int minute;
    public:
    Minute(){}
    Minute(Time T){ minute=T.Get_Time(); }
    void print(){ cout<<minute<<" mins "<<endl; }
};
int main(){
    Time T(3,40);
    T.print();
    Minute M;
    M=T;
    M.print();
    return 0;
}