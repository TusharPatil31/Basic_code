#include<iostream>
// #include<string>
// #include<cstdlib>
using namespace std;


int main()
{
    string str;
    int sum1=0, sum2=0;
    printf("Enter a number which has even Digit\n");
    cin>>str;
    int x=str.size();
    int n=stoi(str);
    int y=x, m=n;
    while(y!=0)
    {
        sum1=sum1+(m%10);
        m/=10; 
        y--;  
    }
    x=x/2;
    while(x!=0)
    {
        sum2=sum2+(n%10);
        n/=10;
        x--;
    }
    if(sum1-sum2==sum2)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
   





    


    return 0;
} 