#include<stdio.h>

void commonChar(const char *s1, const char *s2)
{
    if(NULL==s1 || NULL==s2)
        return;
    
    int count[256]={0};
    
    printf("Common Charactor between '%s' and '%s' = ", s1, s2);

    while (*s1)
        count[*s1++]++;

    // printf("%d", count[68]);
    
    while (*s2)
    {
        if(count[*s2]>0)
        {
            printf("%c",*s2);
            count[*s2]=0;
        }
        s2++;
    }
    printf("\nDone");   
}

int main()
{
    commonChar("ABCE", "ABDE");
    return 0;
} 