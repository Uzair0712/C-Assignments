#include<iostream>
using namespace std;
class Date
{
    int day, month, year;
    public:
    Date(int x,int y,int z)
    {
        day=x, month=y, year=z;
    }
    void ShowDate()
    {
        cout<<endl<<day<<"/"<<month<<"/"<<year;
    }
};
int main()
{
    Date D(7,12,1998);
    D.ShowDate();
    return 0;
}