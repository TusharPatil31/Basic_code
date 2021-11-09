#include<stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[n], temp[n];
    int min=0, max=n-1;

    for (int i = 0; i < n; i++)
    {
        
        scanf("%d\n", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            temp[i]=arr[max];
            max--;
        }
        else
        {
            temp[i]=arr[min];
            min++;
        }  
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",temp[i]);
    }
    
    return 0;
} 