#include<iostream>
using namespace std;

class Counter{
    static int count;
    public:
    Counter(){ count++; }
    static void Show_count(){ cout<<endl<<count; }
};
int Counter :: count=0;
int main(){
    Counter c1,c2,c3,c4,c5;
    Counter::Show_count();
    return 0;
}