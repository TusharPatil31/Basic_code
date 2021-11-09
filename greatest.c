#include<stdio.h>

int main()
{
    int num[10];
    int greatest;
    printf("Enter 10 values:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d\n", &num[i]);
    }
    greatest=num[0];
    for(int i=0; i<10; i++)
    {
        if (num[i]>greatest)
        {
            greatest=num[i];
        }
    }
    printf("Greatest of ten is %d", greatest);
    return 0;
} 