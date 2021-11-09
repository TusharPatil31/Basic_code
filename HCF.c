#include<stdio.h>
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b, a%b);
    }
}

int findGCD(int arr[], int n)
{
    int res=arr[0];
    for (int  i = 1; i < n; i++)
    {
        res= gcd(arr[i], res);
        if(res==1)
        {
            return 1;
        }
        return res;
    }   
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
  printf("The HCF is %d\n", findGCD(arr,n));
    
    return 0;
} 