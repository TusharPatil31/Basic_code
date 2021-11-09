#include<stdio.h>

int main()
{
    int n,c=0;
    printf("Enter a Number\n");
    scanf("%d\n", &n);

    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for (int  j=1; j<=i; j++)
            {
                c++;
                if(j<i)
                {
                    printf("%d$",c);
                }else
                {
                    printf("%d",c);
                }
                
            }
            
        }else
        {
            c=c+i;
            for (int  j = 1; j <=i; j++)
            {
                if(j<i)
                {
                    printf("%d$",c);
                }else
                {
                    printf("%d",c);
                }
                c--;   
            }
            c=c+i;   
        }
        printf("\n");
    }
    return 0;
} 