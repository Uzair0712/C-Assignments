#include<iostream>
#include<string.h>
using namespace  std;
class CString
{
    char s[100];
    public:
    void SetString(const char *str){ strcpy(s,str); }
    void ShowStrint(){ cout<<endl<<s; }

    CString operator + (CString a){
        CString temp;
        strcpy(temp.s,strcat(s,a.s));
        return temp;
    }

    bool operator ==(CString a){
        if(strcmp(s,a.s)==0) 
            return true;
        else
            return false;
    }
};
int main()
{
    CString s1,s2,s3;
    s1.SetString("Hello there");
    s1.ShowStrint();
    s2.SetString(" Hello there, How are you doing today?");
    s2.ShowStrint();
    s3=s1+s2;
    s3.ShowStrint();
    if(s1==s2)
        cout<<"\nBoth strings are same";
    else
        cout<<"\nBoth strings are not same";
    return 0;
}
