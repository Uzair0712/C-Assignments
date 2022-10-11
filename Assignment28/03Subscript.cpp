#include<iostream>
using namespace std;
class Array{
    int size;
    int *ptr;
    public: 
    Array(int n){ 
        size=n;
        ptr=(int *)malloc(size);
    }
    int& operator [](int n){
        if(n>=size){
            cout<<"out of bound range!";
            exit(0);
        }
        return ptr[n];
    }
    
};
int main(){
    Array a(25);
    a[23]=56;
    cout<<a[23];
    a[2]=6;
    cout<<a[2];
    a[89]=0;
    return 0;
}