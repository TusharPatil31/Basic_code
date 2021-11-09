#include<iostream>
#include<cmath>
using namespace std;
int convert(long long n)
{
    int dec=0, i=0, rem;
    while(n!=0)
    {
        rem=n%10;
        dec +=rem*pow(2, i);
        n/=10;
        i++;
    }
    return dec;
}
int main()
{
    long long n;
    printf("Enter a binary number\n");
    scanf("%lld", &n);
    printf("%lld in Binary = %d in decimal", n, convert(n));

    return 0;
} 