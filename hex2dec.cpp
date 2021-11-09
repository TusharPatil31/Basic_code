#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    char hex[17];
    long long decimal=0, place;
    int val, len;

    printf("Enter a hexadecimal number\n");
    cin>>hex;
    len= strlen(hex)-1;

    for (int i = 0; hex[i]!='\0'; i++)
    {
         /* Find the decimal representation of hex[i] */
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
     printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %lld", decimal);
    
    return 0;
} 