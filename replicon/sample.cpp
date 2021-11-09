// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int arr[200],cnt=0;
//     // int arr2[1000];
    
//     for(int i=1; i<=200; i++)
//     {
//         arr[i-1]=i;
//     }
//     // for(int i=0; i<100; i++)
//     // {
//     //     printf("%d\t",arr[i]);
//     // }
//     for(int i=0; i<200; i++)
//     {
//         if((arr[i]%3==0) || (arr[i]%5==0) || (arr[i]%7==0))
//         {
            
//             // int *arr2=(int*)malloc(cnt*sizeof(int));
//             // arr2[cnt-1]=i;
//             // cnt++;
//             // arr2[cnt]=i;
//             // cnt++;
//             printf("%d\t",i);
//         }
//     }
//     // for(int i=0; i<1000; i++)
//     // {
//     //     printf("%d\t", arr2[i]);
//     // }
//     // free(arr2);
//     // int x=0
//     // int *arr2=(int*)malloc(cnt*sizeof(int));
//     // for(int i=0; i<1000; i++)
//     // {
//     //     if(arr[i]%3==0||arr[i]%5==0||arr[i]%7==0)
//     //     {
//     //         arr2[x++]=i;
//     //     }
//     //     else
//     //     {
//     //         continue;
//     //     }
//     // }
//     // free(arr2);
//     // for(int i=0; i<cnt; i++)
//     // {
//     //     printf("%d\t",arr2[i]);
//     // }
    
//     return 0;
// } 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // int k=5;
    // int *p=&k;
    // int **m=&p;
    // cout<<*(&k)<<endl<<&(*p)<<endl<<*m<<endl;
    // cout<<endl;
    // int a=0,b=1,c=2;
    // *((a+1==1)?&b:&c)=a?b:c;
    // cout<<a<<endl<<b<<endl<<c<<endl;

    // float a=1.1;
    // double b=1.1;
    // if(a==b)
    // {
    //     printf("a");
    // }
    // else{
    //     printf("b");
    // }





    int *ptr, i , n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory: ");
    for(i = 0; i < n1; ++i)
         ptr[i]=i+1;
    
    for(i = 0; i < n1; ++i)
         printf("%d\n", ptr[i]);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // rellocating the memory
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    // for(i = 0; i < n2; ++i)
         
    for(i = 0; i < n2; ++i)
         printf("%d\n", ptr[i]);
  
    free(ptr);

    return 0;

}