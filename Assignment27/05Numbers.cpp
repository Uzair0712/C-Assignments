#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
    void SetData(int a,int b,int c){ x=a, y=b, z=c; }
    void ShowData(){ cout<<endl<<"x= "<<x<<", "<<"y= "<<y<<", "<<"z= "<<z; }
    Numbers operator -()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
};
int main()
{
    Numbers n1,n2;
    n1.SetData(2,3,4);
    n2=-n1;
    n1.ShowData();
    n2.ShowData();
    return 0;
}