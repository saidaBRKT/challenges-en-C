#include<stdio.h>
#include<stdlib.h>



int main()
{

	int a,b,c;

	printf("\nentrez la 1er valeur :\t");
	scanf("%d",&a);

	printf("\nentrez la 2eme valeur :\t");
	scanf("%d",&b);

	printf("\n********** Avant la permutation : **********\n");

	printf("a = %d\n",a);
	printf("b = %d\n\n",b);

	if(a!=b || a<b)
	{
	    c=a;
	    a=b;
	    b=c;
	    printf("********** Apres la permutation : **********\n");
	    printf("a = %d\n",a);
	    printf("a = %d\n",b);

	}
	else
        printf("\nles entiers sont identique");



    return 0;
}
#include<stdio.h>
#include<stdlib.h>



int main()
{

	int a,b,c;

	printf("\nentrez la 1er valeur :\t");
	scanf("%d",&a);

	printf("\nentrez la 2eme valeur :\t");
	scanf("%d",&b);

	printf("\n********** Avant la permutation : **********\n");

	printf("a = %d\n",a);
	printf("b = %d\n\n",b);

	if(a!=b || a<b)
	{
	    c=a;
	    a=b;
	    b=c;
	    printf("********** Apres la permutation : **********\n");
	    printf("a = %d\n",a);
	    printf("a = %d\n",b);

	}
	else
        printf("\nles entiers sont identique");



    return 0;
}
