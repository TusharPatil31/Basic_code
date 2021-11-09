#include <stdio.h>

int main()
{
    int num;
    int flag=0;
    printf("Enter a number\n");
    scanf("%d\n", &num);
    for (int i=2; i<=(num/2); i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(num==1){
        printf("1 is neither prime nor composite.\n");
    }
    else
    {
        if(flag==0)
        {
            printf("prime num\n");
        }
        else
        {
            printf("not a prime num\n");        }
        
    }
    
    return 0;
}