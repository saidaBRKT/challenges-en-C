#include<stdio.h>
#include<stdlib.h>



int main()
{
	int a,b;

	printf("entrez la valeur de a : \t");
	scanf("%d",&a);
	printf("entrez la valeur de b : \t");
	scanf("%d",&b);

	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %.2f\n",a,b,(float)a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
		return 0;
}
