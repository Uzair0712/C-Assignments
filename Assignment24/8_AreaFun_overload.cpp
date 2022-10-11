#include<iostream>
#include<math.h>
using namespace std;

float Area(float x)
{
    return x*x*3.14;
}

int Area(int x, int y)
{
    return x*y;
}

float Area(float x, float y)
{
    return 0.5*x*y;
}

int main()
{
    int choice;
    cout<<"Choose which area you want to calculate : ";
    cout<<endl<<"1 Circle \n2 Rectangle \n3 Triangle : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        float r;
        cout<<"Enter the radius of the circle : ";
        cin>>r;
        cout<<"Area of the circle is "<<Area(r);
        break;

    case 2:
        int a,b;
        cout<<"Enter length and breadth of the Rectangel : ";
        cin>>a>>b;
        cout<<"Area of the Rectangle is "<<Area(a,b);
        break;

    case 3:
        float B,H;
        cout<<"Enter base and height of the triangle : ";
        cin>>B>>H;
        cout<<"Area of the triangle is "<<Area(B,H);
        break;
    
    default:
        cout<<"Wrong choice";
        break;
    }
    return 0;
}