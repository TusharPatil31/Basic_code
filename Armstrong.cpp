#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int num){
   int temp=num, sum=0,rem;
   int l=1+(int)log10(num);
    while(temp!=0){
        rem=temp%10;
        sum=sum+pow(rem,l);
        temp=temp/10;
    }
    if(num==sum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
     int n1, n2, sum=0, rem, temp,l;
     cout<<"Enter a n1 and n2"<<endl;
     cin>>n1>>n2;

    if(n1<=0 || n2<=0)
    {
        cout<<"Wrong Output"<<endl;
    }else{
    for(int i=n1; i<=n2; i++)
    {
       int x= armstrong(i);
       if(x==true){
       cout<<"Armstrong "<<i<<endl;}
    }
}
    return 0;
}