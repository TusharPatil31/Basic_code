#include<iostream>
using namespace std;

long long convert(int n)
{
  long long bin=0;
  int rem, i=1;
  while(n!=0)
  {
      rem=n%2;
      n /=2;
      bin +=rem*i;
      i *=10;
  }
  return bin;
}

int main(){
    int n;
    printf("Enter a Decimal number\n");
    scanf("%d", &n);

    printf("%d in Decimal = %lld in Binary\n",n,convert(n));
    return 0;
}