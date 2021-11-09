#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;

    for(int i=0; s[i]!='\0'; i++)
    {
        // s[i]=97-s[i]+122; // for lower case encrpted 'a' as a 'z'
        // s[i]=65-s[i]+90;  // for upper case encrpted  'A' as a 'Z'
        s[i]=65-(s[i]-32)+90;  // 'a' to 'Z' and 'z' to 'A'
        // s[i]=97-(s[i]+32)+122;

    }
    cout<<s<<endl;

    return 0;
}