#include<iostream>
using namespace std;
class Time
{
        int hour, minuite, second;
    public:
        void SetTime(int a,int b,int c)
        {
            hour = a;
            minuite = b;
            second = c;
        }
        void ShowTime()
        {
            cout<<endl<<hour<<" hr "<<minuite<<" min "<<second<<" sec ";
        }
        Time add(Time t)
        {
            Time temp;
            temp.hour=hour+t.hour;
            temp.minuite=minuite+t.minuite;
            temp.second=second+t.second;
            return temp;
        }
        void normalize()
        {
            hour=hour+minuite/60;
            minuite=minuite%60;
            minuite=minuite+second/60;
            second=second%60;
        }
};

int main()
{
    Time T1,T2,T3;
    T1.SetTime(5,34,23);
    T2.SetTime(5,30,56);
    T1.ShowTime();
    T2.ShowTime();
    T3=T1.add(T2);
    T3.ShowTime();
    T3.normalize();
    cout<<endl<<"After normalizing";
    T3.ShowTime();
    return 0;
}
