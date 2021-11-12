CH 8 :
-----------------------------------------
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
  //  debut:
    printf("entrez un alphabet : ");
    scanf("%c", &c);

    if((c>='a' && c<='z'))
    {
        printf("le caractere est un alphabet minuscule\n");
      //  goto debut;
    }
    else if((c>='A' && c<='Z'))
    {
        printf("le caractere est un alphabet majuscule\n");
      //  goto debut;
    }
    else
    {
        printf("n est pas un alphabet\n");
	//	goto debut;
    }
      return 0;
}
