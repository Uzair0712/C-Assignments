#include<iostream>
using namespace std;
class Area
{
    //Circle
    int radius;
    float areaC;
    //Rectangle
    int width, breadth, areaR;
    //Square
    int side, areaS;
    public:
    void SetDataC(int x){ radius = x; }
    int GetR(){ return radius; }

    void CalculateAreaC()
    {
        float temp;
        temp = 3.14*radius*radius;
        areaC = temp;
    }
    float GetAreaC(){ return areaC; }

    //For Ractangle
    void SetDataR(int x, int y)
    {
        width = x, breadth = y;
    }
    int GetWidth(){ return width; }
    int GetBreadth(){ return breadth; }
    void CalculateAreaR(){ areaR = width * breadth;}
    int GetAreaR(){ return areaR; }

    //For square
    void SetDataS(int x){ side = x; }
    int GetSide(){ return side; }
    void CalculateareaS(){ areaS = side*side; }
    int GetAreaS(){ return areaS; }
};

int main()
{
    Area A;
    A.SetDataC(3);
    A.CalculateAreaC();
    cout<<"Area of circle of radius "<<A.GetR()<<" is "<<A.GetAreaC()<<endl;
    A.SetDataR(3,4);
    A.CalculateAreaR();
    cout<<"Area of the Rectangle of sides "<<A.GetWidth()<<" and "<<A.GetBreadth()<<" is "<<A.GetAreaR()<<endl;
    A.SetDataS(5);
    A.CalculateareaS();
    cout<<"Area of the Square of side "<<A.GetSide()<<" is "<<A.GetAreaS();
    return 0;
}