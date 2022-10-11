#include<iostream>
using namespace std;
class Rectangle
{
    int width, breadth, area;
    public:

    void SetData(int x, int y)
    {
        width = x, breadth = y;
    }
    int GetWidth(){ return width; }
    int GetBreadth(){ return breadth; }
    void CalculateArea(){ area = width * breadth;}
    int GetArea(){ return area; }
};

int main()
{
    Rectangle R;
    R.SetData(3,7);
    R.CalculateArea();
    cout<<"Area of the Rectangle of sides "<<R.GetWidth()<<" and "<<R.GetBreadth()<<" is "<<R.GetArea();
    return 0;
}