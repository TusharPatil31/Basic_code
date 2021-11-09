#include<stdio.h>
#include<string.h>

void commonChar(const char *s1, const char *s2)
{
    if(NULL==s1 || NULL==s2)
        return;
    int cnt=0;
    // int count[256]={0};
    
    // printf("Common Charactor between '%s' and '%s' = ", s1, s2);

    // while (*s1)
    //     count[*s1++]++;

    // printf("%d", count[68]);
    
    // while (*s2)
    // {
    //     if(count[*s2]>0)
    //     {
    //         printf("%c",*s2);
    //         count[*s2]=0;
    //     }
    //     s2++;
    // }

    // int l1=strlen(s1);
    // int l2=strlen(s2);
jump:
   for (*s1; *s1!='\0'; s1++)
   {
       for (*s2; *s2!='\0'; s2++)
       {
           if(*s1 == *s2)
           {
               cnt++;
               goto jump;
           }
       }
       
   }
      printf("%d", cnt);
    printf("\nDone");   
}

int main()
{
    commonChar("ABCE", "ABDE");
    return 0;
} 