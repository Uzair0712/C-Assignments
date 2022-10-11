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
};

int main()
{
    Time T1;
    T1.SetTime(5,34,23);
    T1.ShowTime();
}
