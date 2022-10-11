#include<iostream>
using namespace std;
class Coordinate{
    int x,y,z;
    public:
    Coordinate(){}
    Coordinate(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void Print(){
        cout<<'('<<x<<','<<y<<','<<z<<')';
    }
    Coordinate operator,(Coordinate a){
        Coordinate temp;
        temp.x=a.z;
        temp.y=a.y;
        temp.z=a.x;
        return temp;
    }
};
int main(){
    Coordinate C(1,2,4),c1(4,5,6),c2(9,8,7);
    Coordinate d;
    d=(c1,c2);
    d.Print();

}