#include<stdio.h>
#include<stdlib.h>



int main()
{
	int lr,lg,c;

	printf("entrez la largeur : \t");
	scanf("%d",&lr);
	printf("entrez la longueur : \t");
	scanf("%d",&lg);

	c= 2*(lg +lr);
	printf("la circonference est : %d\n",c);

		return 0;
}
