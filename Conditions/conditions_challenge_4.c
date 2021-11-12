#include<stdio.h>
#include<stdlib.h>



int main()
{

	int a,b,s;

	printf("\nentrez la 1er valeur :\t");
	scanf("%d",&a);

	printf("\nentrez la 2eme valeur :\t");
	scanf("%d",&b);

	s=a+b;

	if(a!=b)
	{
	    printf("a = %d\n",a);
	    printf("a = %d\n",b);
	    printf("la somme est : %d\n",s);

	}
	else
    {
         printf("\nles entiers sont identique");
         printf("\na = %d\n",a);
	     printf("B = %d\n",b);
         printf("le triple de leur somme est : %d\n",3*s);
    }




    return 0;
}
