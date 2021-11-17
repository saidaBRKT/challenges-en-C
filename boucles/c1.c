#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,nbr;

    printf("Saisir Un Nomber : ");
    scanf("%d", &nbr);

    printf("La table de Multiplication de Nomber %d  est : \n", nbr);

    for(i=0;i<=10;i++)
        {
        	
           printf("%d * %d = %d\n",nbr,i,nbr*i);
        }



    return 0;
}
