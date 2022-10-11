#include<iostream>
using namespace std;
class Box
{
    int length, breadth, height;
    int volume;
    public:
    Box(int x, int y, int z){ length=x, breadth=y, height=z; }
    void CalculateVolume(){ volume=length*breadth*height; }
    int GetVolume(){ return volume; }
};
int main()
{
    Box B(2,3,4);
    B.CalculateVolume();
    cout<<"Volume of the Box is "<<B.GetVolume();
    return 0;
}