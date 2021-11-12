#include<stdio.h>
#include<stdlib.h>



int main()
{

	float mile,res;
	printf("entrez la distance en Mile: \t");
	scanf("%f",&mile);
	res=(mile*1.609)*1000;
	printf("la distance en Mettre est %.2f:",res);
		return 0;
}
