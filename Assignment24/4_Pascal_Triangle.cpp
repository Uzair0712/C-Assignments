#include<iostream>
#include<iomanip>
using namespace std;

void Pasc(int n)
{
    int Combi(int, int);
    int fact(int);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(int k=1;k<n-i;k++)
        cout<<"  ";

        for(j=0;j<=i;j++)
        {
            cout<<setw(3)<<Combi(i,j)<<" ";
        }
        cout<<endl;
    }
}
int Combi(int n, int r)
{
    int c;
    int fact(int);
    c=fact(n)/fact(r)/fact(n-r);
    return c;
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    f*=i;
    return f;
}

int main()
{
    int n;
    cout<<"How many lines of Pascal Triangle you want to print : ";
    cin>>n;
    Pasc(n);
    return 0;
}