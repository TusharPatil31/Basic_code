#include <iostream>
#include <cmath>

int main()
{
    int n,m, flag;
    printf("Enter lower bound of the interval: ");
    scanf("%d", &n);
    printf("Enter upper bound of the interval: ");
    scanf("%d ", &m);

    for (int i = n ; i <= m; i++)
    {
        if(i==1 || i==0)
        {
            continue;
        }
        flag=0;
        for (int j = 2; j <= (i / 2); j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}