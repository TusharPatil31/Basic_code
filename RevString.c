#include<stdio.h>
#include<string.h>
void RevString();

int main()
{
    char a[100];
    printf("Enter a String.\n");
    gets(a);
    int i;
    i=strlen(a);
    RevString(a,i);
    printf("%s\n",a);
    return 0;
} 
void RevString(char *a, int x)
{
    char temp;
     for(int i=0; i<(x/2); i++)
     {
        temp = a[i];
        a[i] = a[x - i - 1];
        a[x - i - 1] = temp;
     }
}
