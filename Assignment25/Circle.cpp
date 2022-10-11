#include<iostream>
using namespace std;
class Circle
{
    int radius;
    float area;
    public:
    void SetR(int x){ radius = x; }
    int GetR(){ return radius; }

    void CalculateArea()
    {
        float temp;
        temp = 3.14*radius*radius;
        area = temp;
    }
    float GetArea(){ return area; }
};

int main()
{
    Circle C;
    C.SetR(4);
    C.CalculateArea();
    cout<<"Area of circle of radius "<<C.GetR()<<" is "<<C.GetArea();
    return 0;
}