// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int arr[1000],cnt=0;
//     int N; // user input
//     printf("Enter a Nth term\n");
//     scanf("%d\n", &N);
//     for(int i=1; i<=1000; i++)
//     {
//         arr[i-1]=i;
//     }

//     for(int i=0; i<1000; i++)
//     {
//         if((arr[i]%2==0) || (arr[i]%3==0) || (arr[i]%5==0))
//         {  
//             cnt++;  //find count how many number are divisible for 2,3,5
//         }
//     }
//     int x=1;
//     int *arr2=(int*)malloc((cnt+1)*sizeof(int));// dynamic memory allocation for array 2
//     arr2[0]=1;
//     for(int i=1; i<1000; i++)
//     {
//         if(arr[i]%2==0||arr[i]%3==0||arr[i]%5==0)
//         {
//             arr2[x++]=i+1;
//         }
//     }
//     printf("\n");
//     for(int i=0; i<cnt; i++)
//     {
//         printf("%d\t", arr2[i]);
//     }
//     printf("\n");
//     printf("%d\n", arr2[N-1]);

//     free(arr2);
//     return 0;
// } 

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *arr,n,x=1;
    printf("Enter a nth terms\n");
    scanf("%d\n", &n);
    int m=1;
    arr=(int*)malloc(1*sizeof(int));
    arr[0]=1;
    for(int i=2; i<=1000; i++)
    {
        if(i%2==0||i%3==0||i%5==0)
        {
            arr= realloc(arr,(++m)*sizeof(int));
            arr[x++]=i;
        }
    }
    printf("\n");
     for(int i=0; i<=(sizeof(arr)/sizeof(int)); i++)
    {
        printf("%d\t", arr[i]);
    }
    free(arr);
    // printf("\n");
    // printf("%d\n",arr[n-1]);
    return 0;
} 
