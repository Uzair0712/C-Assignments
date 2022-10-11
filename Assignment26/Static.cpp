#include<iostream>
using namespace std;
class Static
{
    static int stc;
    public:
        static void StaticFun(){ stc++; }
        static int ShowValue(){  return stc; }
};
int Static:: stc=0;
int main()
{
    Static::StaticFun();
    Static::StaticFun();
    Static::StaticFun();
    Static::StaticFun();
    Static::StaticFun();
    Static::StaticFun();

    cout<<"The result is ";
    cout<<Static::ShowValue();
}