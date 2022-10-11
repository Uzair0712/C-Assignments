#include<iostream>
#include<cstring>
using namespace std;
class MyString{
    char str[100];
    public:
        void TakeString(){
            cout<<"Enter the string : ";
            fgets(str,100,stdin);
            str[strlen(str)-1]='\0';
        }
        void ShowString(){
            cout<<endl<<str;
        }
        MyString operator !(){
            MyString temp;
            for(int i=0;str[i];i++){
                if(str[i]>='A' && str[i]<='Z')
                    temp.str[i]=str[i]+32;
                else if(str[i]>='a' && str[i]<='z')
                    temp.str[i]=str[i]-32;
                else
                    temp.str[i]=str[i];
            }
            return temp;
        }
};
int main(){
    MyString s1,s2;
    s1.TakeString();
    s2=!s1;
    s1.ShowString();
    s2.ShowString();

    return 0;
}
