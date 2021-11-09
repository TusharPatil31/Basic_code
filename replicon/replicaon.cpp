#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;
    cout<<endl;

    for (int  i = 0; str[i]!='\0'; i++)
    {
        if(str[i]-k<65)
        {
            str[i]=str[i]-k+26;
        }else
        {
            str[i]=str[i]-k;
        }
    }
    cout<<str<<endl;
    return 0;
}