#include<iostream>
using namespace std;
class Cube
{
    int side,cube;
    public:
        Cube(int x){ side=x; }
        void CalculateCube(){ cube=side*side*side; }
        int Getside(){ return side; }
        int GetCube(){ return cube; }
};
int main()
{
    Cube C(3);
    C.CalculateCube();
    cout<<endl<<"Cube of cube having side "<<C.Getside()<<" is "<<C.GetCube();
    return 0;
}