#include<iostream>
using namespace  std;
class Square
{
    int number;
    int square;
    static int count;
    public:
        void SetNumber(int x){ number = x; }
        int GetNumber(){ return number; }
        void CalculateSquare(){ count++; square = number*number; }
        int GetSquare(){ return square; }
        static int GetCount(){ return count; }
};
int Square:: count=0;
int main()
{
    Square S1,S2,S3;
    S1.SetNumber(5);
    S1.CalculateSquare();
    cout<<endl<<"Square of "<<S1.GetNumber()<<" is "<<S1.GetSquare();
    S2.SetNumber(8);
    S2.CalculateSquare();
    cout<<endl<<"Square of "<<S2.GetNumber()<<" is "<<S2.GetSquare();
    S3.SetNumber(12);
    S3.CalculateSquare();
    cout<<endl<<"Square of "<<S3.GetNumber()<<" is "<<S3.GetSquare();
    cout<<endl<<Square::GetCount()<<" times the function is used";
    return 0;
}
