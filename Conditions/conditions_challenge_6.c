#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,pal,t;
    printf("Donnez une chaine de caracteres:\n");
    scanf("%s",s);
    pal=1;

    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
       if(s[i]!=s[j])
       {
         pal=0;
         break;
       }
    }


    if(pal==1)
    printf("%s est palindrome.\n",s);
    else
    printf("%s n est pas palindrome.\n",s);

    return 0;
}
