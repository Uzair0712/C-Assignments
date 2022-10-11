#include<iostream>
using namespace std;
class Student
{
    int rollno, percentage;
    char name[15];
    public:
    Student()
    {
        cout<<"Enter rollno. ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter percentage: ";
        cin>>percentage;
    }
    void ShowDetails()
    {
        cout<<endl<<rollno<<", "<<name<<", "<<percentage;
    }
};
int main()
{
    Student S;
    S.ShowDetails();
    return 0;
}