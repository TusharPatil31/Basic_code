#include<stdio.h>

int main()
{
    int n,m,temp;
    printf("Enter a size of array\n");
    scanf("%d\n",&n);
    int arr[n];

    if(n>=3 && n<=10)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter a %d element = ", i+1);
            scanf("%d\n", &m);
            if(m<0 || m>1000)
            {
                printf("Invaild input\n");
                break;
            }
            arr[i]=m;
        }
        for (int  i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\n",arr[i]);
        }
        
    }else
    {
        printf("Invaild Input\n");
    }
    return 0;
} 