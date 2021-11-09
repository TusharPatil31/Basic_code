#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter a two numbers"<<endl;
    cin>>n>>m;
    n=n+m;
    m=n-m;
    n=n-m;

    cout<<"Value of n "<<n<<" and Value of m "<<m<<endl;
    
    return 0;
} 