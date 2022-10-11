#include<iostream>
using namespace std;
class ReverseNumber
{
    int number,number1,Reverse;
    public:
        void SetNumber(int x){ number = x; }

        int GetNumber(){ return number; }
        int GetRevNumber(){ return Reverse; }
        void CalculateRev()
        {
            int temp = 0;
            number1 = number;
            while (number1)
            {
                temp = temp * 10 + number1 % 10;
                number1  /= 10;
            }
            Reverse = temp;
        }
};

int main()
{
    ReverseNumber R;
    R.SetNumber(10943);
    R.CalculateRev();
    cout<<"Reverse of "<<R.GetNumber()<<" is "<<R.GetRevNumber();
    return 0;
}