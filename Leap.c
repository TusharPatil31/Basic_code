#include<stdio.h>

int main()
{
    int year; 

    printf("Enter a year\n");
    scanf("%d\n",&year);

    if(year%400==0){
        printf("Leap Year\n");
    }
    else if(year%100==0){
        printf(" Not a Leap Year\n");
    }
    else  if(year%4==0){
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
    
    return 0;
} 