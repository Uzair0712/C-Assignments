#include<iostream>
using namespace std;
class Marks{
    int marks;
    public:
    void SetMarks(int x){ marks=x; }
    void print(){ cout<<endl<<marks; }
    Marks* operator ->(){ return this; }

};
int main(){
    Marks m;
    m->SetMarks(56);
    m->print();
    return 0;
}