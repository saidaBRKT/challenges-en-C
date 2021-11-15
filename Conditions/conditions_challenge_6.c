#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char mot[50],temp[50];
    int pal ;
    printf("Entrez un mot : ");
    scanf("%s",&mot);
    strlwr(mot);
    strcpy(temp,mot);
    strrev(temp);
    pal = strcmp(temp, mot);


    if(pal == 0)
    {
        printf("palindrome");
    }
    else{
        printf("n est pas palindrome");
    }

    return 0;
}

