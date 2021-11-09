#include<stdio.h>
int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }   
}

int main()
{
    int n;
    float sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        sum+=((float)i/(float)fact(i)); 
    }
    printf("%.3f\n", sum);
    return 0;
} 