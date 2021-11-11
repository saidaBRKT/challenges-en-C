#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int X1,Y1,X2,Y2;
	float AB;

	printf("entrez la coordonne X de A : \t");
	scanf("%d",&X1);
	printf("entrez la coordonne Y de A : \t");
	scanf("%d",&Y1);
	printf("entrez la coordonne X de B : \t");
	scanf("%d",&X2);
	printf("entrez la coordonne Y de B : \t");
	scanf("%d",&Y2);
    AB=sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
	printf("AB = %.2f\n",AB);



		return 0;
}
