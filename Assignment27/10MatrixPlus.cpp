#include<iostream>
#include<iomanip>
using namespace std;
class Matrix{
    int M[3][3];
    public:
        friend istream & operator >>(istream&, Matrix&);
        friend ostream& operator << (ostream&, Matrix);
        Matrix operator + (Matrix m){
            Matrix temp;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    temp.M[i][j]=M[i][j]+m.M[i][j];
                }
            }
            return temp;
        }
};
istream& operator >> (istream &din, Matrix &m){
    cout<<"Enter the matrix : ";
    for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>m.M[i][j];
                }
            }    
    return din;
}
ostream& operator << (ostream &dout, Matrix m){
    cout<<endl;
    for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<setw(3)<<m.M[i][j]<<" ";
                }
                cout<<endl;
            }
    return dout; 
}
int main(){
    Matrix m1,m2,m3;
    cout<<"first: ";
    cin>>m1;
    cout<<"second : ";
    cin>>m2;
    m3=m1+m2;
    cout<<"\nFirst Matrix :";
    cout<<m1;
    cout<<"\nSecond Matrix :";
    cout<<m2;
    cout<<"\nAddition of Matrix :";
    cout<<m3;
    return 0;
}
