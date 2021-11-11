#include<stdio.h>
#include<stdlib.h>



int main()
{

	float res,dist;
	printf("entrez la distance en Metre : \t");
	scanf("%f",&dist);
	res=(dist/1000)/1.609;
	printf("la distance en Mil est %.2f:",res);
		return 0;
}
