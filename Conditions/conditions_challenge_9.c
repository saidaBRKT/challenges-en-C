#include<stdio.h>
#include<stdlib.h>
int main()
{
    int j,m,a;

    printf("entrez une date au format suivant (15/9/2012):\n");
    scanf("%d/%d/%d",&j,&m,&a);
    if((j>=1 && j<=30)&&(m>=1 && m<=12)&& a>1)
    {


    if(j<10)
	    printf("0%d-",j);
    else
	    printf("%d-",j);

    switch(m)
    {
       case 1:
	        printf("Janvier");
            break;
       case 2:
	        printf("Fevrier");
            break;
       case 3:
	        printf("Mars");
            break;
       case 4:
	        printf("Avril");
            break;
       case 5:
	        printf("Mai");
            break;
       case 6:
	        printf("Juin");
            break;
       case 7:
	        printf("Juillet");
            break;
       case 8:
	        printf("Aout");
            break;
       case 9:
	        printf("Septembre");
            break;
       case 10:
	        printf("Octobre");
            break;
       case 11:
	        printf("Novembre");
            break;
       case 12:
	        printf("Decembre");
            break;
    }

    printf("-%d\n",a);

    }
    else
        printf("erreur de saisi");

    return 0;
}
