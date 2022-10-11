#include<iostream>
#include<istream>
#include<ostream>
using namespace std;
class Time
{
    int Hour,Minutes,Seconds;
    public:
    bool operator == (Time t)
    {
        if(Hour==t.Hour && Minutes==t.Minutes && Seconds==t.Seconds)
            return true;
        else
            return false;
    }
    friend ostream & operator <<(ostream &,Time);
    friend istream & operator >>(istream&, Time&);
};
ostream & operator <<(ostream &dout, Time t)
    {
        cout<<endl;
        cout<<"Hour : "<<t.Hour<<endl;
        cout<<"Minute : "<<t.Minutes<<endl;
        cout<<"Seconds : "<<t.Seconds;
        return dout;
    }

istream & operator >>(istream &din, Time &t)
    {
        cout<<"\nEnter Hour : ";
        din>>t.Hour;
        cout<<"Enter Minutes : ";
        din>>t.Minutes;
        cout<<"Enter Seconds : ";
        din>>t.Seconds;
        return din;
    }

int main()
{
    Time t1,t2;
    cin>>t1>>t2;
    cout<<t1<<t2<<endl;
    if(t1==t2)
        cout<<"Both times are same";
    else 
        cout<<"Both times are different";

    return 0;
}
    