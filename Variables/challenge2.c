#include<stdio.h>
#include<stdlib.h>



int main()
{
	int temp;
	float res=0;
	printf("entrez la temperature en Fahrenheit : \t");
	scanf("%d",&temp);
	res=(temp*1.8)+32;
	printf("la temperature en degre Celsius est %.2f:",res);
		return 0;
}
