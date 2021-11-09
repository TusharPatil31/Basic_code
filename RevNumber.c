#include <stdio.h>
int RevNumber();

int main()
{
    int a, x;
    printf("Enter a Number more than 2 Digit\n");
    scanf("%d\n", &a);
    x = RevNumber(a);
    printf("Reverse Number is %d\n", x);

    return 0;
}

int RevNumber(int n)
{
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}