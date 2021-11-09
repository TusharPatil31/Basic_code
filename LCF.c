#include<stdio.h>
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }else
    {
        return gcd(b, a%b);
    }   
}

int findLCF(int arr[], int n){
    long long int ans= arr[0];
    for (int  i = 1; i < n; i++)
    {
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
    }
    return ans;
}

int main()
{
   int n;
  printf("Enter size of array\n");
  scanf("%d\n",&n);
  int arr[n];
  for (int  i = 0; i < n; i++)
  {
    printf("Enter a number\n");
    scanf("%d",&arr[i]);
  }
  printf("The LCF is %lld\n", findLCF(arr,n));
    return 0;
} 