#include<stdio.h>

int main()
{
    int n;
    unsigned long long fact=1;
    printf("Enter a number\n");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Factorial of negative number doesn't exit\n");
    }
    else
    {
        for(int i=1; i<=n; i++)
    {
        fact= fact*i;
        printf("%llu\n", fact);
    }
    printf("%llu\n", fact);
    }
    
    return 0;
} 