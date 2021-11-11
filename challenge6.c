#include<stdio.h>
#include<stdlib.h>



int main()
{
	int temp;
	float res=0;
	printf("entrez la temperature en Fahrenheit : \t");
	scanf("%d",&temp);
	res=(temp-32)/1.8;
	printf("la temperature en degré Celsius est %.2f:",res);
		return 0;
}
