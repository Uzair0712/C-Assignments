#include<iostream>
using namespace std;
class Time{
    int hour, min, sec;
    public:
    Time(){}
    Time(int T){
        hour=T/3600;
        min=(T%3600)/60;
        sec=((T%3600)%60);
    }
    void print(){
        cout<<hour<<" : "<<min<<" : "<<sec<<endl;
    }
};
int main(){
    int time;
    cout<<"Enter time in seconds : ";
    cin>>time;
    Time T;
    T=time;
    T.print();
    return 0;
}